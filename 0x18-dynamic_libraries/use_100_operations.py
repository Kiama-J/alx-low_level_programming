#!/usr/bin/python3
from ctypes import CDLL


def main():
    # Load the dynamic library
    lib = CDLL('./100-operations.so')

    # Call the C functions from the library
    result_add = lib.add(5, 3)
    result_subtract = lib.subtract(10, 4)

    print(f"Addition: {result_add}")
    print(f"Subtraction: {result_subtract}")


if __name__ == "__main__":
    main()
