# Robotic Arm Program
This project was made for the Human-Computer Interaction (Computação Humano-Máquina) subject.
The goal was to learn OpenGL and C++ and how they can be used to create systems that communicate effectively with humans.

[![Demo Video](https://github.com/user-attachments/assets/3ed14b5b-6426-42c2-a5ca-ad11ce2672a1)](https://github.com/user-attachments/assets/3ed14b5b-6426-42c2-a5ca-ad11ce2672a1)

## Installation
Before building the project, make sure you have:

- A C++ compiler (`g++`)
- `freeglut` installed (OpenGL dependency)

Example package installation:

- **Ubuntu/Debian**: `sudo apt install g++ freeglut3-dev`
- **Fedora**: `sudo dnf install gcc-c++ freeglut-devel`
- **Arch Linux**: `sudo pacman -S gcc freeglut`
- **macOS (Homebrew)**: `brew install freeglut`

## Running the project

### With `just`
1. Install [`just`](https://github.com/casey/just).
2. Run:
   ```bash
   just run
   ```

### Without `just`
1. Build:
   ```bash
   g++ main.cpp -o main -lGL -lglut
   ```
2. Run:
   ```bash
   ./main
   ```

## How the program works
The program is a Robotic Sorting Station that is controlled by the user to sort packages into specific boxes.
The user spawns packages that appear on a conveyor belt and move to a position where the Robotic Arm can pick them up.

After picking up a package, the user must decide which destination box is correct based on the visual properties of the object and check his weight.

Here is the image representation of how the program works:

<img width="1024" height="768" alt="image" src="https://github.com/user-attachments/assets/83df2fa5-de5a-44c3-b726-64f4eb464f50" />
