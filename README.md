# 📘 gameSFML
A demonstration project following the SFML Game Development Book.

# 🧩 Overview
This project is a learning-based SFML (Simple and Fast Multimedia Library) game, adapted from tutorials in the SFML Game Development Book. It provides a minimal yet functional C++ game structure including:
  -Window creation <br/>
  -Event handling <br/>
  -Asset loading <br/>
  -Basic game loop using SFML <br/>
# 🛠️ Getting Started
## Prerequisites:
  -C++ compiler supporting C++11 (or higher) <br/>
  -SFML library installed <br/>
  -CMake <br/>

## Build instructions
```bash
git clone https://github.com/AkaiNishin/gameSFML.git
cd gameSFML
mkdir build && cd build
cmake ..
cmake --build .
./gameSFML   # or your OS equivalent
```

# 📝 Project Structure
```bash
CMakeLists.txt    # Build configuration
main.cpp          # Entry point: initializes window & game loop
Include/          # Header files (if present)
Source/           # Implementation files
Media/            # Textures, fonts, etc.
```
