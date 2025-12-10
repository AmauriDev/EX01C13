# README

## Title: Sort Integer

## 1. Description
The program collects a series of integers from the user and displays them sorted in decreasing order.

## 2. Features
- Collect a series of integers input
- Sort then in decreasing order
- Display them

## 3. Requirements
A C compiler language compatible with ANSI C.

### 3.1 Library dependencies
- `<stdio.h>` Standard Input / Output

### 3.2 Platform
It runs on any platform with a C compiler

## 4. Instalation
You can clone the project from github
- **Source:** `git clone https://github.com/AmauriDev/EX01C13.git`
- **CodeBlock IDE:** [Download](https://www.codeblocks.org/downloads/)
  
Open `01-exercise.cbp` contains all information to work on `CodeBlock`

## 5. Usage
**Windows platform**
Inside the project folder navigate to `build/` directory.
Open a CMD windows and run
`01-exercise`

## 6. Project structure
- `project-root/`
  - `build/` - compiled executable
  - `docs/`  - documentation files
  - `src/`   - source code

## 7. Modules
- `sort_int.c` - contain the `main()` module it is the orchestrator, call others modules
- `print.c`    - contain the `print()` module it display a single integer array
- `sort.c`     - contain the `sort()` module it sort the integer value from higher to smaller

## 8. License
This project is released under the MIT License.  
It applies only to the source code and documentation written by me. 
For the complete license text, see the [LICENSE](LICENSE.md) file.
The original exercise description comes from *C Primer Plus, 3rd Edition* (Stephen Prata, Sams Publishing, 1998) and is the property of its respective author and publisher.

## 9. Author
- Amauris Frias

### 9.1 Exercise source
This programming exercise is based on the book:

*C Primer Plus, 3rd Edition*  
Author: **Stephen Prata**  
Publisher: **Sams Publishing (1998)**  

The exercise description belongs to its original author and publisher.  
This repository only contains my own implementation and documentation for educational purposes.