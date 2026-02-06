# Internship Tasks - Month 1 (February 2026)
**Developer:** Ilyan Khan  
**Organization:** Arch Technologies  
**Department:** Computer Systems Engineering  
**Student ID:** 24CSE24  

This repository contains the programming assignments completed during my C++ Programming Internship. These tasks focus on fundamental C++ concepts including loops, random number generation, and array manipulation.

---

## 📋 Task Overview

### Task 1: Dice Rolling Game
**File:** `task_1.cpp`
A simulator that mimics the roll of two six-sided dice. 
* **Logic:** Uses `srand(time(0))` to ensure unique results on every run.
* **Control Flow:** Implements a `do-while` loop to allow the user to roll multiple times without restarting the program.

### Task 2: Simple To-Do List
**File:** `task_2.cpp`
A console-based application to manage daily tasks.
* **Storage:** Uses a fixed-size string array to store up to 100 tasks.
* **Functionality:** * Add new tasks to the list.
    * View the full list with numbered indices.
    * Remove tasks by shifting remaining elements to prevent gaps in the array.
* **Safety:** Includes a check to ensure users cannot remove tasks when the list is empty.

---

## 🛠️ How to Compile and Run

Ensure you have a C++ compiler installed (like `g++`). You can run these on your terminal (works on Kali Linux or Fedora):

1. **Clone the repository:**
   ```bash
   git clone https://github.com/Ilyan321/Arch_Internship_Month_1.git
2. **Compile the files**
   ``` bash
   g++ task_1.cpp -o dice_game
   g++ task_2.cpp -o todo_list```
3. **Run the program**
   ```bash
   ./dice_game
   ./todo_list```

### 🎓 About the Author
**I am a Computer Systems Engineering student at QUEST, Nawabshah. My current focus is on mastering Data Structures and Algorithms (DSA) and Cybersecurity.**

## Note: This project is part of the Arch Technologies internship program.
