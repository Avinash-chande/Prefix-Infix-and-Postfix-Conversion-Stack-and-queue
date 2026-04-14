# Prefix / Infix / Postfix Conversion (Stack & Queue)

[![C++](https://img.shields.io/badge/language-C%2B%2B-lightgrey.svg)](#)  

A C++ project illustrating conversions between **prefix**, **infix**, and **postfix** expressions using stack and queue data structures

---


## 🧩 Overview

This project provides implementations in C++ for converting between the three common notations of arithmetic expressions-

- **Infix** — The usual human-readable form, e.g. `(A + B) * C`  
- **Prefix** (Polish notation) — Operator comes before operands, e.g. `+ A * B C`  
- **Postfix** (Reverse Polish notation) — Operator comes after operands, e.g. `A B C * +`

Conversion is done using stacks (and where useful, queues) to handle operator precedence, associativity, and parentheses

---

## ⚙️ Features

- Convert **Infix → Prefix**  
- Convert **Infix → Postfix**  
- Convert **Prefix → Infix**  
- Convert **Prefix → Postfix**  
- Convert **Postfix → Infix**  
- Convert **Postfix → Prefix**

Each conversion respects operator precedence and parentheses, ensuring valid results (or detecting invalid input where applicable)



