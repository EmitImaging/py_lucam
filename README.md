# py_lucam
This repository contains the Python bindings for Lumenera's LuCam SDK, allowing you to interact with Lumenera cameras directly from Python.
See **Teledyne Lumenera** [official's website](https://www.lumenera.com/) to acquire the proper drivers and SDK for your system.

This package was tested on the following environment:
* Ubuntu 22.04 with the SDK version 2.4.11.241
* Windows 10 x64 with the SDK version 6.9.0

**This is currently only a partial implementation.**

## Prerequisites
Before you begin, ensure you have met the following requirements:

- Python 3.9 or higher
- A C++ compiler that supports C++11 (e.g., MSVC, GCC or Clang)
- Access to the Lucam SDK and its development libraries
- Installed to Lumenera drivers for the camera

## Installation

To install the Lucam Python bindings, follow these steps:

1. Clone the repository:

```bash
git clone https://github.com/EmitImaging/py_lucam.git
cd py_lucam
```
2. Install the requirements:

```bash
pip install -r requirements.txt
```

3. Build the python package

```bash
export LUMENERA_SDK=/my/lucam_sdk/root/location/
./build.sh
```

## Usage
To install the generated wheel package using pip:
```bash
pip install dist/py_lucam-0.1-cp311-cp311-win_amd64.whl
```
Once the package installed, the connected devices can be interacted with using the `lucam` module:
```python
import lucam
import numpy as np

# Open the first camera
camIndex = 1
camHandle = lucam.CameraOpen(camIndex)

# Close camera connection
lucam.CameraClose(camHandle)
```

## Example
See [examples/binding_test.py](https://github.com/EmitImaging/py_lucam/blob/main/examples/binding_test.py) for a full example.

To run the example, OpenCV must first be installed:
```
pip install opencv-python
```
```bash
./python examples/binding_test.py
```

## Contributing
We welcome contributions to this project. Please fork the repository and submit a pull request with your changes.

