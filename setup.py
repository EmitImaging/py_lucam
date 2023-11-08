from setuptools import setup, Extension
import os
import pybind11

# Define variables for sources and library locations
sources = ['src/lucam_binding.cpp']
lucam_root = os.environ['LUMENERA_SDK']
lib_directory = os.path.join(lucam_root, 'api', 'lib')
include_directory = os.path.join(os.environ['LUMENERA_SDK'], 'api', 'include')
libraries = ['lucamapi']

lucam_module = Extension(
    name='lucam',
    sources=sources,
    include_dirs=[pybind11.get_include()],
    language='c++',
    extra_compile_args=['-std=c++11', '-DLUMENERA_LINUX_API', f'-I{lucam_root}'],
    extra_link_args=[f'-L{lib_directory}', '-l'+libraries[0]],
)

setup(
    name='lucam_python',
    version='0.1',
    ext_modules=[lucam_module],
)