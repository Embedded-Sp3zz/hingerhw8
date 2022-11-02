#!/bin/bash

# Build file for myApp.cpp to myApp
# Build file for bankAyy.cpp to bankApp

# Must have derek_LED.h and derek_LED.cpp in working directory
# Must have bankAccount.h and bankAccount.cpp in working directory

echo "Compling file myApp.cpp to myApp."

g++ myApp.cpp derek_LED.cpp -o myApp

echo "Compiling file myBlink.cpp to myBlink."

g++ myBlink.cpp derek_LED.cpp -o myBlink

echo "Compiling file bankApp.cpp to bankApp."

g++ bankApp.cpp bankAccount.cpp -o bankApp

echo "Build complete"
