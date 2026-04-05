# 🏊 42 Piscine - São Paulo Campus
> "A 26-day deep dive into C, logic, and extreme problem-solving."

[![42 São Paulo](https://img.shields.io/badge/42-SÃO%20PAULO-000000?style=for-the-badge)](https://www.42sp.org.br/)
![Language](https://img.shields.io/badge/LANGUAGE-C-A8B9CC?style=for-the-badge&logo=c&logoColor=white)
![Shell](https://img.shields.io/badge/SHELL-BASH-4EAA25?style=for-the-badge&logo=gnu-bash&logoColor=white)

This repository contains the projects and exercises I completed during the **42 São Paulo Piscine**. This intensive 4-week immersion focuses on C programming, Unix system fundamentals, and the unique "Peer-Learning" methodology.

---

## 📑 Table of Contents
* [The Experience](#-the-experience)
* [Project Structure](#-project-structure)
* [The 42 Rigor (The Norm)](#️-the-42-rigor-the-norm)
* [How to Test](#-how-to-test)
* [Key Takeaways](#-key-takeaways)
* [Disclaimer](#️-disclaimer)

---

## 🚀 The Experience
The Piscine is more than just coding, it's a test of resilience. For 26 consecutive days, I faced challenges that required:
* **Autonomy:** No teachers, no lectures. Just documentation, peers, and trial and error.
* **The "Moulinette":** An automated grading system that demands 100% technical perfection. A single missing space or a memory leak equals a score of zero.
* **Collaboration:** Deep engagement with the peer-evaluation system to both teach and learn.

---

## 📂 Project Structure

| Module | Category | Key Concepts |
| :--- | :--- | :--- |
| **Shell 00 & 01** | Unix Basics | CLI, permissions (`chmod`), `find`, `sed`, `awk`, networking flows. |
| **C 00 - C 01** | C Basics | Basic functions, `write` syscall, pointers, and memory addressing. |
| **C 02 - C 04** | Intermediate C | String manipulation, Arrays, Recursion, and base conversions (`atoi`, `putnbr`). |
| **C 05 - C 06** | Advanced C | Computational math, command-line arguments (`argc/argv`). |
| **Rush 00** | Group Project | Collaborative development under pressure and visual logic algorithms. |

---

## 🛠️ The 42 Rigor (The Norm)
All C code in this repository strictly follows **"The Norm"** (the 42 coding standard). 

> [!IMPORTANT]
> **Key constraints included:**
> * No `for`, `do...while`, `switch`, `case`, or `goto` allowed.
> * Maximum of **25 lines** per function and **5 functions** per file.
> * All variables must be declared at the top of the function.
> * Strict compilation: `cc -Wall -Wextra -Werror`.
> * Standard library functions are mostly forbidden (we build everything from scratch).

---

## 💻 How to Test
To compile and test any exercise (e.g., C00, ex01):

```bash
# Navigate to the exercise directory
cd C00/ex01

# Compile with the rigor flags
cc -Wall -Wextra -Werror main.c ft_putchar.c -o program_name

# Run the binary
./program_name
```

---

## 🧠 Key Takeaways

* **Low-Level Mastery:** Gained a deep understanding of how memory works (Stack vs. Heap) and how the computer executes code.
* **Algorithm Development:** Implemented manual versions of functions that are usually taken for granted in modern high-level languages.
* **Problem-Solving Mindset:** Developed the "Try Harder" attitude, learning to debug and refactor until the code is flawless.

---

## ⚠️ Disclaimer
This repository is for educational purposes and to showcase my progress during the 42 Piscine. If you are currently a "Piscinier," I strongly encourage you to solve the challenges on your own.

**"The easy way is the wrong way."**

*Note: No project PDFs or official 42 materials are hosted here to respect intellectual property.*

---

“Success is not final, failure is not fatal: it is the courage to continue that counts.” - (Mostly just what I told myself every time I saw a red '0' on my dashboard).
