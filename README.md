# C++ Module 01

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![macOS](https://img.shields.io/badge/macOS-000000?style=for-the-badge&logo=apple&logoColor=white)
![42](https://img.shields.io/badge/42-Project-00BABC?style=for-the-badge)
![Score](https://img.shields.io/badge/Score-100%25-brightgreen?style=for-the-badge)

## 📋 Project Overview

C++ Module 01 is the second project in the 42 school C++ curriculum, building on Module 00 by introducing advanced memory management, class design, and control structures in C++98. Through six exercises—**BraiiiiiiinnnzzzZ**, **Moar brainz!**, **HI THIS IS BRAIN**, **Unnecessary violence**, **Sed is for losers**, and **Harl 2.0/Harl filter**—this module emphasizes dynamic memory allocation, pointers, references, and switch statements. It enforces strict coding standards, including no forbidden functions, explicit namespace usage, and robust error handling, preparing students for deeper C++ concepts.

## ✨ Key Features

- **Exercise 00: BraiiiiiiinnnzzzZ**:
  - Implements a `Zombie` class with stack (`randomChump`) and heap (`newZombie`) allocation.
  - Demonstrates basic memory management with `new` and `delete`.
- **Exercise 01: Moar brainz!**:
  - Allocates a zombie horde using `new Zombie[N]`, with unique names via numerical suffixes (e.g., `Horde0`).
  - Ensures proper deallocation with `delete[]`.
- **Exercise 02: HI THIS IS BRAIN**:
  - Contrasts pointers and references using a `std::string`, printing addresses and values.
- **Exercise 03: Unnecessary violence**:
  - Uses `Weapon` references in `HumanA` and pointers in `HumanB` for attack behaviors.
  - Introduces initialization lists for references.
- **Exercise 04: Sed is for losers**:
  - Performs string replacement in files using `std::string::find` and `std::fstream`.
  - Handles file I/O errors and command-line arguments.
- **Exercise 05/06: Harl 2.0 and Harl filter**:
  - Implements a `Harl` class with pointers to member functions (Ex05) and a `switch` with fall-through (Ex06) for complaint filtering.
- **C++98 Compliance**:
  - Compiled with `-Wall -Wextra -Werror -std=c++98`.
  - No `using namespace`, `friend`, or forbidden functions (`printf`, `alloc`, `free`).
- **Norm Compliance**:
  - Adheres to 42’s coding standards, with newline-terminated outputs and no memory leaks (verified with `valgrind`).

## 🛠️ Prerequisites

- **Operating System**: UNIX-based (Linux, macOS, etc.).
- **Compiler**: `c++` (GCC or Clang, C++98 compatible).
- **Build Tool**: `make`.
- **Debugger**: `valgrind` for memory leak detection.

## 🚀 Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/mde-agui/Cpp01.git
   cd Cpp01
   ```

2. Navigate to an exercise directory and compile:
   ```bash
   cd ex01
   make
   ```
   Repeat for `ex00`, `ex02`, `ex03`, `ex04`, `ex05`, `ex06`. This creates executables (e.g., `zombie_horde`, `harlFilter`).

## 📖 Usage

Each exercise is independent and run from its respective directory.

### Exercise 00: BraiiiiiiinnnzzzZ
```bash
cd ex00
./zombie
```
Output: Creates stack and heap zombies, printing `BraiiiiiiinnnzzzZ...` and destruction messages.

### Exercise 01: Moar brainz!
```bash
cd ex01
./zombie_horde 3 Horde
```
Output:
```
Horde0: BraiiiiiiinnnzzzZ...
Horde1: BraiiiiiiinnnzzzZ...
Horde2: BraiiiiiiinnnzzzZ...
Horde0 is destroyed
Horde1 is destroyed
Horde2 is destroyed
```

### Exercise 02: HI THIS IS BRAIN
```bash
cd ex02
./brain
```
Output: Prints a string’s value and memory addresses via pointer and reference.

### Exercise 03: Unnecessary violence
```bash
cd ex03
./violence
```
Output: Displays attacks from `HumanA` and `HumanB` with their weapon types.

### Exercise 04: Sed is for losers
```bash
cd ex04
./replace test.txt "old" "new"
```
Output: Creates `test.txt.replace` with all instances of `old` replaced by `new`.

### Exercise 05: Harl 2.0
```bash
cd ex05
./harl DEBUG
```
Output: Prints the `DEBUG` complaint message.

### Exercise 06: Harl filter
```bash
cd ex06
./harlFilter WARNING
```
Output:
```
[WARNING] I think I deserve to have some extra bacon for free...
[ERROR] This is unacceptable! I want to speak to the manager now.
```

Check for memory leaks:
```bash
valgrind ./zombie_horde 3 Horde
```

## 📂 Project Structure

```
cpp_module_01/
├── ex00/                   # BraiiiiiiinnnzzzZ: Stack vs. heap allocation
│   ├── Makefile
│   ├── Zombie.hpp
│   ├── Zombie.cpp
│   └── main.cpp
├── ex01/                   # Moar brainz!: Array allocation with suffixed names
│   ├── Makefile
│   ├── Zombie.hpp
│   ├── Zombie.cpp
│   ├── zombieHorde.cpp
│   └── main.cpp
├── ex02/                   # HI THIS IS BRAIN: Pointers vs. references
│   ├── Makefile
│   └── main.cpp
├── ex03/                   # Unnecessary violence: References vs. pointers
│   ├── Makefile
│   ├── Weapon.hpp
│   ├── Weapon.cpp
│   ├── HumanA.hpp
│   ├── HumanB.hpp
│   └── main.cpp
├── ex04/                   # Sed is for losers: File I/O and string replacement
│   ├── Makefile
│   └── main.cpp
├── ex05/                   # Harl 2.0: Pointers to member functions
│   ├── Makefile
│   ├── Harl.hpp
│   ├── Harl.cpp
│   └── main.cpp
├── ex06/                   # Harl filter: Switch with fall-through
│   ├── Makefile
│   ├── Harl.hpp
│   ├── Harl.cpp
│   └── main.cpp
└── README.md               # This file
```

## 🛠️ Makefile Commands

Each exercise has its own `Makefile` with the following commands:

| Command       | Description                              |
|---------------|------------------------------------------|
| `make`        | Builds the executable (e.g., `zombie_horde`, `harlFilter`). |
| `make clean`  | Removes object files.                    |
| `make fclean` | Removes object files and executable.     |
| `make re`     | Rebuilds the project from scratch.       |

## 🔍 Technical Details

- **C++ Concepts Covered**:
  - **Memory Allocation**: Stack (automatic) and heap (dynamic with `new`/`delete`) allocation in `ex00` and `ex01`.
  - **Classes**: `Zombie` (ex00, ex01), `Weapon`, `HumanA`, `HumanB` (ex03), and `Harl` (ex05, ex06) with private attributes and public methods.
  - **Pointers to Members**: Used in `ex05` to map complaint levels to methods dynamically.
  - **References**: Contrasted with pointers in `ex02` and used in `ex03` for `HumanA`.
  - **Switch Statements**: Employed in `ex06` with intentional fall-through for filtering complaints.
  - **File I/O**: Implemented in `ex04` using `std::ifstream` and `std::ofstream`.
  - **Other Basics**:
    - **Constructors/Destructors**: Initialize and clean up objects (e.g., `Zombie::~Zombie` prints destruction).
    - **this->**: Disambiguates member variables.
    - **std::stringstream**: Converts integers to strings in `ex01` for name suffixes.
- **Constraints**:
  - Compiled with `-Wall -Wextra -Werror -std=c++98`.
  - No `using namespace`, `friend`, or forbidden functions (`printf`, `alloc`, `free`).
  - No memory leaks, verified with `valgrind`.
  - Outputs end with newlines (per subject requirements).
- **External Functions**:
  - Allowed: `new`, `delete`, `std::atoi`, `std::ifstream`, `std::ofstream`, `std::stringstream`.
- **Error Handling**:
  - Validates command-line arguments (e.g., `N > 0`, non-empty strings).
  - Checks file accessibility in `ex04`.
  - Handles invalid inputs in `ex06` with a default message.

## 📚 Explanation of Key C++ Concepts

### Memory Allocation
Memory allocation determines where objects are stored:
- **Stack Allocation**: Variables are automatically allocated and freed when they go out of scope. In `ex00`, `randomChump` creates a `Zombie` on the stack, destroyed at function end.
- **Heap Allocation**: Uses `new` to allocate memory, requiring `delete` to free it. In `ex00`, `newZombie` creates a `Zombie` on the heap, and in `ex01`, `zombieHorde` allocates an array with `new Zombie[N]`, freed with `delete[]`.
- **Why It Matters**: Proper heap management prevents leaks, verified with `valgrind` in `ex00` and `ex01`.

### Pointers to Members
Pointers to member functions enable dynamic method calls within a class:
- **Syntax**: Declared as `void (ClassName::*pointerName)(void)`, called with `(object->*pointerName)()`.
- **Usage in Ex05**: `Harl::complain` uses a `struct` array mapping complaint levels (`DEBUG`, `INFO`, etc.) to member functions (`debug`, `info`, etc.), allowing scalable dispatch.
- **Why It Matters**: Reduces code duplication by dynamically selecting methods based on input.

### References
References are aliases for variables, safer than pointers:
- **Characteristics**: Must be initialized, cannot be `NULL`, and accessed without dereferencing. In `ex02`, `stringREF` aliases a `std::string`, showing identical memory addresses to its pointer counterpart.
- **Usage in Ex03**: `HumanA` uses a `Weapon&` to ensure a valid weapon, initialized via an initializer list, while `HumanB` uses a `Weapon*` for optional weapons.
- **Why It Matters**: References enforce validity, simplifying code in `HumanA`.

### Switch Statements
Switch statements efficiently handle multiple conditions:
- **Mechanics**: Match an expression to `case` labels, with optional fall-through if no `break` is used.
- **Usage in Ex06**: Maps a level index (`0–3`) to complaints, using fall-through to print all levels from the input (e.g., `WARNING`) to `ERROR`. `// FALLTHROUGH` comments suppress `-Wimplicit-fallthrough` warnings.
- **Why It Matters**: Fall-through enables concise hierarchical output, as required in `ex06`.

## 📝 Notes

- **Implementation Details**:
  - `ex01` uses `std::stringstream` for numerical suffixes (e.g., `Horde0`).
  - `ex06` uses `// FALLTHROUGH` to handle compiler warnings.
- **Testing**:
  - Test programs were used for `ex00`–`ex04` but not submitted.
  - `valgrind` ensures no memory leaks in `ex00`, `ex01`, and `ex03`.
- **Evaluation**:
  - Outputs match the subject’s requirements (e.g., `BraiiiiiiinnnzzzZ...`, `test.txt.replace`).
  - Adheres to 42’s Norminette equivalent (manual checks for line length, naming).

## 📜 License

This project is licensed under the [MIT License](LICENSE).

## 👤 Author

**mde-agui**  
GitHub: [mde-agui](https://github.com/mde-agui)

---

⭐️ If you find this project useful, consider giving it a star on GitHub!
