from setuptools import setup, Extension
import os
import pybind11

# Define variables for sources and library locations
lucam_root = os.environ['LUMENERA_SDK']
sources = ['src/lucam_binding.cpp']
libraries = ['lucamapi']

if os.name == "nt":
    # Windows
    platform_name = 'Windows'
    platform_api = 'LUMENERA_WINDOWS_API'
    std_flag = '/std:c++latest'
    lib_directory = os.path.join(lucam_root, 'lib', 'lib64')
    include_directory = os.path.join(lucam_root, 'include')
    link_args = [f'/LIBPATH:{lib_directory}', f'{libraries[0]}.lib']
else:
    # Linux
    platform_name = 'Linux'
    platform_api = 'LUMENERA_LINUX_API'
    std_flag = '-std=c++11'
    lib_directory = os.path.join(lucam_root, 'api', 'lib')
    include_directory = os.path.join(lucam_root, 'api', 'include')
    link_args = [f'-L{lib_directory}', f'-l{libraries[0]}']

lucam_module = Extension(
    name='lucam',
    sources=sources,
    include_dirs=[pybind11.get_include()],
    language='c++',
    extra_compile_args=[f'{std_flag}', f'-D{platform_api}', f'-I{include_directory}'],
    extra_link_args=link_args,
)

setup(
    name='py_lucam',
    version='0.1',
    license='BSD',
    author='Emit Imaging',
    author_email='yannick.cadoret@emitimaging.com',
    url='https://www.emitimaging.com',
    python_requires='>=3.9',
    install_requires=['numpy>=1.26.1'],
    platforms=[f'{platform_name}'],
    ext_modules=[lucam_module],
)