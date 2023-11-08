# py_lucam
This repository contains the Python bindings for Lumenera's LuCam SDK, allowing you to interact with Lumenera cameras directly from Python.

This was currently tested on Ubuntu 22.04 with the Linux sdk version 2.4.11.241. This is currently only a partial implementation.

## Prerequisites
Before you begin, ensure you have met the following requirements:

- Python 3.9 or higher
- A C++ compiler that supports C++11 (e.g., GCC or Clang)
- Access to the Lucam API and its development libraries (version 2.4.11.241+)

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
```python
import lucam
import numpy as np

# Open the first camera
camIndex = 1
camHandle = lucam.CameraOpen(camIndex)

# Close camera connection
lucam.CameraClose(camHandle)
```
See examples/binding_test.py for a full example. (OpenCV installation is required)
```bash
./python3 examples/binding_test.py
```

## Contributing
We welcome contributions to this project. Please fork the repository and submit a pull request with your changes.

