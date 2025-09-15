# Pacman Clone (C++ / Qt)

A faithful and functional clone of the classic Pacman arcade game, built from the ground up using C++ and the Qt framework for cross-platform GUI. This project demonstrates strong object-oriented programming principles, game logic implementation, and Qt widget painting.

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Qt](https://img.shields.io/badge/Qt-41CD52?style=for-the-badge&logo=qt&logoColor=white)

## 🎮 Features

-   **Classic Gameplay:** Move Pacman through the maze to eat all dots while avoiding ghosts.
-   **Ghost AI:** Ghosts implement basic chasing and scattering behavior.
-   **Power-ups:** Collect power pellets to temporarily turn the tables and eat the ghosts.
-   **Score System:** Track your score for eating dots, ghosts, and power-ups.
-   **Lives System:** The game ends when Pacman loses all lives.

## 🛠️ Tech Stack

-   **Language:** C++
-   **GUI Framework:** Qt
-   **IDE:** Qt Creator (Recommended)
-   **Build Tool:** qmake

## 📦 Installation & Build

### Prerequisites
Before you can build and run this project, you need to have the following installed on your system:
-   **Qt Development Tools:** [Download Qt](https://www.qt.io/download) (The Open Source version is sufficient). Make sure to install Qt Creator and a Qt kit (e.g., Qt 6.x).
-   **C++ Compiler:** This is usually included with the Qt kit (like MinGW on Windows or GCC on Linux/Mac).

### Building the Project

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/Mahdiyar-Monemian/-cpp-pacman-gui.git
    cd -cpp-pacman-gui
    ```

2.  **Open in Qt Creator:**
    -   Launch Qt Creator.
    -   Select **File > Open File or Project...**.
    -   Navigate to the cloned folder and open the `.pro` file (e.g., `Pacman.pro`).

3.  **Configure and Build:**
    -   Qt Creator will automatically detect the kit. Click **Configure Project**.
    -   To build and run, press the green **Run** button (or `Ctrl+R`).

4.  **Alternatively, build from the command line:**
    ```bash
    # Navigate to the project directory
    qmake
    make        # On Linux/Mac use 'make', on Windows with MinGW use 'mingw32-make'
    # The executable will be in the ./release/ or ./debug/ folder
    ```

## 🕹️ How to Play

-   Use the **Arrow Keys (↑, ↓, ←, →)** to navigate Pacman through the maze.
-   Eat all the **dots (·)** to win the level.
-   Avoid the ghosts in their normal state!
-   The game keeps track of your score and remaining lives.
