# Module - sort()

## 1. Objective Definition
### 1.1 Problem Analysis
The system must sort integer values provided by the system in descending order

**Example**
~~~
Data provided by the user
5 9 3 2 8

Data sorted
9 8 5 3 2
~~~

**What kind of data?**
In the previously example the system works with a list of integer values.

**What kind of data structure?**
`Array`: list of elements provided by the system


**Does this module alter inputs values?**
Yes. It modifies the position of values

**Does this module return any value?**
- return values: None. Function modifies the input `buffer` in place

| Modules details       | Field                                   |
|-----------------------|-----------------------------------------|
| **Name**              | `sort()`                                |
| **Number of inputs**  | 2 (array reference, element count )     |
| **Process**           | Sort array elements in descending order |
| **Output**            | Input array reordered in place          |
| **Return value**      | None                                    |

### 1.2 Requirements
The module must reorder all values provided by the system in descending order.
The sort() module does not interact directly with user input.
It operates on data previously collected by the system.
- An integer array provided by the system
- The number of elements in the array

### 1.3 Purpose
This module is a subsystem that allows the `Sorting integer system` reorder all data.
It acts as a core of the system

### 1.4 Scope
**The module will:**
- Reorder all elements in `buffer`

**The module will not:**
1. Evaluate empty or invalid data.
2. Prompt for any kind of input
3. Display or present data.
4. Storage data in external files or databases

### 1.5 Overall objective
The module assumes that valid data has already been provided by the system
In the Sorting integer system, the `sort()` module is a subsystem whose sole purpose is to reorder data provided to the system

## 2. Design Module
### 2.1 System role and boundaries
This module is **dependent**, as it operates as a subsystem of the Sorting Integer System.
It performs the core functionality of reordering system-provided data in descending order.

### 2.2 Interaction with other modules
This module is the main core processing component of the `Sorting system`.
It reorders data previously collected by the system through the `getarray()` subsystem.

**Procedure**
1. The `main()` calls:
   1. `getarray()` - Collects data from the user (Input subsystem)
   2. `sort()`     - Rorder all data in a descending order (Process subsystem)
   3. `print()`    - Displays data before and after sorting (Output subsystem)

### 2.3 Dependencies
This module has no external librariy dependencies.
It operates exclusively on dasta provided by the system

**Hierarchy chart**
~~~
                -----------
                | main()  |
                -----------
                    |
                    +
--------------  -----------     ----------
| getarray() |  | print() |     | sort() |
--------------  -----------     ----------
~~~

### 2.4 Overall design
The `sort()` module is a subsystem of the overall `Sorting System`
Its sole responsibility is to reorder data in a descending order provides by the system

## 3. Implementation
### 3.1 Technology decision
This exercise belongs to a set of C programming exercises from `C primer plus` for this reason, the  `C language` was selected as the implementation technology

### 3.2 Algorithm
1. Iterate through the array elements.
2. Compare each element with the remaining elements.
3. Swap values when a higher value is found.
4. Continue until all elements are ordered in descending order.

### 3.3 Code
~~~c
void sort(int array[], int limit){
    int top, search, temp;

    for(top = 0; top < limit - 1; top++){
        for(search = top + 1; search < limit; search++){
            if(array[search] > array[top]){
                temp = array[search];
                array[search] = array[top];
                array[top] = temp;
            }
        }
    }
}
~~~

## 4. Testing
**Objective:**
Verify that the module sorts all values correctly based on the inputs provided by the system.

### 4.1 Test plan
**What will be tested:**
- All data are sorted in a desceding order

**Acceptance criterial:**
- The module reorders values from highest to smallest

### 4.2 Test procedure
#### Test case 1
- **Description:** A set of 10 integer numbers ordered from smallest to highest
- **Input:** `0 1 2 3 4 5 6 7 8 9`

**Procedure:**
1. Initialize an integer array with the input values.
2. Call the `sort()` module passing the array and the number of elements

**Expected result:**
- The array is reordered in descending order: `9 8 7 6 5 4 3 2 1 0`

---

#### Test case 2
- **Description:** A set of 10 integer numbers unordered 
- **Input:** `0 2 4 6 8 9 7 5 3 1`

**Procedure:**
1. initialize an integer array with the input values.
2. Call the `sort()` module passing the array and the number of elements

**Expected result:**
- The array is reordered in descending order: `9 8 7 6 5 4 3 2 1 0`

### 4.3 Test result
| Test case  | Inputs                | Expected result       | Status |
|------------|-----------------------|-----------------------|--------|
| `1`        | `0 1 2 3 4 5 6 7 8 9` | `9 8 7 6 5 4 3 2 1 0` | Passed |
| `2`        | `0 2 4 6 8 9 7 5 3 1` | `9 8 7 6 5 4 3 2 1 0` | Passed |

### 4.4 Test summary
The module `sort()` successfully completed the previously defined test cases:
- Ordered integer input.
- Unordered integer input.

## 5. Maintenance
### 5.1 Current limitation
- The module operates only on integer arrays.
- It does not validate empty or invalid inputs.
- The nuber of elements must be explicity provided by the system

### 5.2 Future improvements
- Extended support to decimal (floating-point) inputs.
- Add parameter to allow ascending or descending order selection.
- Optimize algorithm for larger datasets (consider quicksort or mergesort)
- Expand test coverage to include decimal and edge-case inputs.