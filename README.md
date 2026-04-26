# Project README

## Overview
The project is a simple application that displays an image and allows the user to flip it horizontally or vertically by pressing the left and right mouse buttons, respectively. The image can also be saved as a new file.

## Features
- Display an image
- Flip the image horizontally and vertically
- Save the flipped image

## Project Structure
### Prerequisites
- C/C++ Compiler and Debugger (GCC)
- Make utility
- Libraries needed in specific projects:
  - X11 for Linux display handling
  - GDI32 for Windows graphical operations
  - PNG and JPEG libraries for image processing

## Build & Run
The project supports building on Linux, Windows, and WebAssembly environments. Below are the steps to build and run the application.

### Building on Linux
```bash
cd /path/to/project
make -f Makefile.linux all
```

### Running on Linux
```bash
./build/Main
```

### Debugging on Linux
```bash
make -f Makefile.linux debug
```

### Building on Windows
```bash
cd /path/to/project
make -f Makefile.windows all
```

### Running on Windows
```bash
build\Main.exe
```

### Debugging on Windows
```bash
make -f Makefile.windows debug
```

### Building for WebAssembly
```bash
cd /path/to/project
make -f Makefile.web all
```

### Running in the Browser
Open `build/index.html` in a web browser.

### Cleaning Build Artifacts
```bash
make -f Makefile.linux clean
```

---