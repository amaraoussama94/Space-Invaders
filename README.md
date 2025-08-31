# 🧟 Space-Invaders
<p align="center">
    <img src="https://github.com/amaraoussama94/Space-Invaders/blob/main/game_pic_1.png"  >  
</p>

**Space-Invaders++** is a modular C++/SFML remake of the classic arcade shooter.  
Your mission: defend Earth from waves of alien invaders using precise movement, strategic shooting, and a responsive UI.  
Built with modern design patterns and a clean architecture to support scalability, maintainability, and contributor onboarding.

---
## 🧩 Project Structure

```text
├── include/ # Header files (.hpp) 
│ ├── GameEngine.hpp 
│ ├── GameObjectFactory.hpp 
│ ├── InputHandler.hpp 
│ └── ... 
├── src/ # Source files (.cpp) 
│ ├── GameEngine.cpp 
│ ├── GameObjectFactory.cpp 
│ ├── InputHandler.cpp 
│ └── ... 
├── assets/ # Sound and graphics 
├── diagrams/ # Architecture visuals 
├── Makefile 
└── Readme.md
```
---
## 🚀 Getting Started

### 🔧 Prerequisites

- **C++17-compatible compiler**
- **CMake ≥ 3.24**
- **SFML 2.5.1** (included as a submodule)

### 🛠️ Build Instructions

#### 🐧 Linux

```bash
sudo apt install build-essential cmake libx11-dev libxrandr-dev libxcursor-dev libxi-dev libxinerama-dev libgl1-mesa-dev libudev-dev libopenal-dev libflac-dev libvorbis-dev libfreetype6-dev
git clone --recurse-submodules https://github.com/yourusername/Thomas-Wass-Alone.git
cd Thomas-Wass-Alone
make
./bin/Thomas_was_Alone
```
### 🪟 Windows Build Instructions (MSYS2 MINGW64)

1. ✅ Install mingw-w64-x86_64-gcc, mingw-w64-x86_64-cmake ,mingw-w64-x86_64-make ,mingw-w64-x86_64-pkg-config ,mingw-w64-x86_64-freetype ,make
2. ✅ git clone --recurse-submodules https://github.com/yourusername/Thomas-Wass-Alone.git
3. ✅ under MSYS2 MINGW64

```bash
make run 
```

to clean build ( bin *.o )

```bash
make clean  
```

to clean all ( even sfml build  )

```bash
make clean-all

```
## 🎮 Game Controls 
## 🎮 Game Controls

| Action       | Key        |
|--------------|------------|
| Move Up      | ↑ Arrow    |
| Move Down    | ↓ Arrow    |
| Move Left    | ← Arrow    |
| Move Right   | → Arrow    |
| Shoot        | Spacebar   |
| Exit Game    | Escape     |

Use the UI panel to start the game and navigate menus.


## 📋 General Info

- **Game Name:** Space Invaders++
- **Version:** 0.8 – still has some open issues
- **Genre:** Arcade Shooter
- **Engine:** C++ with SFML
- **Executable:** `Sapce_Invaders` (typo noted, will be fixed)

---

## 🧩 Features & Game Mechanics

- Entity-Component Pattern for flexible object behavior
- Strategy Pattern (composition-based logic)
- Factory Pattern for object instantiation
- Smart Pointers (`shared_ptr`, `unique_ptr`) for memory safety
- Runtime assertions for debugging and stability
- Modular UI system with screen/panel/button hierarchy
- Input routing via dedicated `InputHandler` per panel

---

### 📐 Diagram 1 – UI Hierarchy

<p align="center">
    <img src="https://github.com/amaraoussama94/Space-Invaders/blob/main/diagram.png">
</p>

Each screen contains one or more `UIPanel` instances that can be displayed selectively.  
Each `UIPanel` may contain zero or more `Button` instances.  
Every panel has a corresponding `InputHandler`, tailored to its button layout.  
Buttons are shared via pointers between `UIPanel` and `InputHandler`.

---

### 📐 Diagram 2 – Game Logic Flow

<p align="center">
    <img src="https://github.com/amaraoussama94/Space-Invaders/blob/main/diagram_2.png">
</p>

---

### 📐 Diagram 3 – File I/O and Factory Structure

<p align="center">
    <img src="https://github.com/amaraoussama94/Space-Invaders/blob/main/The%20structure%20of%20the%20file%20I-O%20and%20factory%20classes.png">
</p>
