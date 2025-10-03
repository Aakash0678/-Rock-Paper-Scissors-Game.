# 🪨📄✂️ C++ Console Rock Paper Scissors Game

A simple, classic game of Rock, Paper, Scissors implemented in C++ for the console. Play against the computer, track your score, and try to beat the machine!

---

## ✨ Features

* **Classic Gameplay:** Standard Rock beats Scissors, Scissors beats Paper, Paper beats Rock logic.
* **Score Tracking:** Keeps a running tally of your wins versus the computer's wins.
* **Simple Console Interface:** Easy-to-use numbered menu for choosing your move.
* **Game Summary:** Displays the final score and declares the overall winner upon exit.

---

## 🛠️ Technologies Used

* **Language:** C++
* **Libraries:** `iostream`, `cstdlib`, `ctime`

---

## 🚀 How to Play

### Prerequisites

You need a C++ compiler (like g++, MinGW, or MSVC) installed on your system.

### Running the Game

1.  **Clone the Repository:**
    ```bash
    git clone [https://github.com/YourUsername/YourRepoName.git](https://github.com/YourUsername/YourRepoName.git)
    cd YourRepoName
    ```
    *(Replace `YourUsername/YourRepoName` with your actual GitHub path)*

2.  **Compile the Source Code:**
    Assuming your file is named `rps_game.cpp`, use a command like this:
    ```bash
    g++ rps_game.cpp -o rps
    ```

3.  **Execute the Game:**
    ```bash
    ./rps
    ```

### Game Instructions

Once running, you will be presented with a menu:
===== Rock Paper Scissors Game =====

Choose one:

Rock

Paper

Scissors

Exit


1.  Enter the corresponding number (1, 2, or 3) to make your move.
2.  The computer will randomly choose its move.
3.  The winner of the round will be announced, and the scores will be updated.
4.  Enter `4` to quit the game and see the final result.

---

## 💡 Code Highlights

* **Randomness:** Uses `srand(time(0))` to seed the random number generator, ensuring a different game every time.
* **Array Mapping:** The `string choices[]` array maps the user's numeric input (`1, 2, 3`) to the string names (`"Rock", "Paper", "Scissors"`), making the output easy to read.
* **Game Loop:** The core game logic is housed within a `while(true)` loop, which only breaks when the user explicitly chooses to exit (`userChoice == 4`).

---

## 🧑‍💻 Contributing

This is a small, complete project, but feel free to fork the repository and explore improvements, such as:

* Adding input validation for non-numeric input.
* Implementing a "best-of-N" match system.

---
## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
