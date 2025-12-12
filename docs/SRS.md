# Software Requirements Specification - [EX01C13]

## Introduction
### 1.1 Purpose
The program collects a series of integers from the user and displays them sorted in decreasing order.

### 1.2 Scope
**The system will:**
1. **Collect** a list of integer values from the user until either:
   - 100 values have been entered, or.
   - the user enter the termination character '#'

2. **Display** the list exactly as it was entered.
3. **Sort** the list in decreasing (descending) order.
4. **Display** the sorted list.

## 2. Overal Description
The system interacts with user through a console interface.
The user provide integer values one at a time.
The system stores up to 100 value and terminates input early is the user enter the character '#'
After collecting the data, the system prints the values in the order they were entered, 
the sorts them in descending order and prints the resul.

### 2.1 Product Perspective
The sorting program is a standalone consola application.
It does not dependend of extenal systems, network connections.
The only external interaction is with the user, who provides integer values throug standard input.

The program is composed of three internal modules:

- `getarray()` - collects inputs values
- `sort()`     - organizes the values
- `print()`    - displays original and sorted data

All modules are contained withing the system and communicastes directly with the main execution flow.
The system operates entirely in memory  and has no extenal storage requirements

### 2.2 System Functions
At a high level, the system will:
1. Prompt to the user to enter integer values.
2. Store them.
3. Print the value in the order they were entered.
4. Sort them in descending order.
5. Print the sorted values.

### 2.3 User Characteristc
The user must enter integer values. Input can be terminated early at any time by entering the character '#'

### 2.4 Constraints
- Only integer input values are accepted.
- The system works with at most 100 input elements
- The system does not use command-line parameters
- The system does not store any values in files or databases
- Input collection terminates early if th user enters the character '#'

## 3 Specific Requirements
### 3.1 Functional Requirements (FR)
- **ID:** `FR-1`
- **Depend:** (NONE)
- **Module:** `getarray()`
- **Description:** Collects integer input values from theuser until either 100 elements are entered or the user enters '#'
- **Category:** Input

___
- **ID:** `FR-2`
- **Depend:** `FR1`
- **Module:** `print()`
- **Description:** Display the values stored in a single matrix
- **Category:** Output
___
- **ID:** `FR-3`
- **Depend:** `FR1`
- **Module:** `sort()`
- **Description:** Perfom the sorting from highest to lowest
- **Category:** Process 
___

### 3.2 Non-Functional Requirements
|   ID  | Description                                                                                             | Category                       |
|-------|---------------------------------------------------------------------------------------------------------|--------------------------------|
| NFR-1 | The program must run in console without runtimes error                                                  | Raliabllity                    |
| NFR-2 | The system must enforce that all input comes exclusively from the keyboard (standard input)             | Security / input validation    |
| NFR-3 | The system must provide a responsive mechanist to terminate input before reaching 100 elements          | Usability                      |
| NFR-4 | The system must operate entirely in volatile memory, without using external storage (file or databases) | Resource / Storage constraints |
| NFR-5 | The system must display outputs in a clear and readble formar for the user                              | Usability                      |


## 4. Data Requirements
### 4.1 Input data
The user enters integer input one at a time until 100 elements are reached or the termination character '#' is entered

### 4.2 Internal data structures
- int numbers[100] - stores integer values from user inputs

### 4.3 Output data
- Print all values stores in `numbers` 10 elements per line in console.

### 5. Acceptance Criteria
The feature is considered successfull when:
|   ID  | Description                                                  | Category                    |
|-------|--------------------------------------------------------------|-----------------------------|
| AC-1  | The system receives integer values until 100 elements or user enters '#' | Functional / Input handling |
| AC-2  | The system sorts all elements in descending order            | Functional / Processing     |
| AC-3  | The system print all values clear and readable for the user  | Non-functional / Usability  |

## 6. Revision History
| Version | Date      | Author        | Description                                                         |
|---------|-----------|---------------|---------------------------------------------------------------------|
| 1.0     | 2025-12-9 | Amauris Frias | Reverse engineering [`Exercise 1 chapter 13`] from `C primer plus ` |
| 1.1     | 2025-12-9 | Amauris Frias | Updated input termination behavior to user '#' instead of EOF       |