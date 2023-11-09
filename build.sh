#!/bin/bash
python setup.py build_ext --inplace -v &&
python setup.py sdist &&
python setup.py bdist_wheel