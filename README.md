# C-Guessing-Game

A small console program written in **C++** that challenges the user to guess a randomly-chosen number.  
This project was created as an exercise in modular design, function calling, and the use of header files.

## 🚀 Features

- Generates a pseudo-random integer within a configurable range
- Prompts the user for guesses and gives “too high/low” feedback
- Counts the number of attempts and reports the score
- Allows the player to play multiple rounds

## 🧠 What I learned

This repository isn’t just about guessing numbers – it’s a showcase for a few important C/C++ skills:

1. **Function decomposition**  
   - `printWelcome()`, `getGuess()`, `checkGuess()` (or similar) live in `.cc`/ `.cpp` files.  
   - Each function performs a single job, making the logic easy to read and test.

2. **Header files (`.h` / `.hpp`)**  
   - All function prototypes and `#include` guards are declared in a separate header (e.g. `game.h`).  
   - The implementation files `#include` the header, keeping the interface/implementation cleanly separated.

3. **Function calling & arguments**  
   - Arguments are passed by value and by reference.  
   - Return values are used to communicate results (e.g. `bool isCorrect(int guess, int target)`).

4. **Modular compilation**  
   - You can compile each `.cc`/`.cpp` file separately and link them, e.g.
     ```sh
     g++ -c guess.cc -o guess.o
     g++ -c game_logic.cc -o game_logic.o
     g++ guess.o game_logic.o -o guessing-game
     ```

5. **Basic I/O and control flow**  
   - `std::cin`/`std::cout`, loops (`while`, `do`-`while`), and `if`/`else` statements.

## 📁 Project structure

```
C-Guessing-Game/
├── guessing-game/          # source files
│   ├── guess.cc            # main routine
    |                       # function declarations
├── README.md               # this file
```

*(adjust names to match your actual file layout)*

## 🛠 Building & running

```bash
# using g++
g++ guessing-game/guess.cc -o guessing-game/guess

# then run
./guessing-game/guess
```

Or, if you separated logic into multiple files:

```bash
g++ -std=c++17 guessing-game/*.cc -o guessing-game/guess
```

## 📝 Notes

- Feel free to extend the game (e.g. add a high-score list, difficulty levels, or input validation).
- This repo is a simple demo of good C/C++ habits: clean headers, reusable functions, and modular design.

---
