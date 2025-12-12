# Module - getarray()

## 1. Define the objective
### 1.1 Purpose
Prompt a sequence of integer input provided by the user and store them into a provided integer array. Input stops when the array reaches its limit or the user enters a termination character '#'

### 1.2 Scope
**The module will:**
1. **Collect** a list of integer values from the user until either:
   1. `limit` elements have been entered, or.
   2. The user enter the terminatior character '#'

2. **Return** The number of valid input entered by the user.


## 2. Design the module
### 2.1 System Independence
This module is **dependent**, as it operates as a subsystem of the sorting program.
It does not perfom sorting by itself; instead, it provides input to the main sorting logic

### 2.2 Interaction With Other Modules
The module acts as an interface between the user and the sorting subsystem.
It supplies the `sort()` module with the data it needs by:
1. Prompting the user for integer input
2. Validating each entry
3. Storing all valid values into the provided integer array
4. Returning the number of collected elements to `main()`

### 2.3 Dependencies
This module depend on:
- Standard Input/ Output (Keyboard input and console output)
- The caller's memory buffer (the integer array provided as a parameter)
It does not allocate memory on its own and does not depende on external storage or files

### 2.1 Overall description
The `getarray()` module is a subsystem of the overall `Sort system`.
Its primary roles it to:
1. Collec integer values from the user
2. Enforce terminatior condition (`limit` or `#`)
3. Provide the sorting module with a clean, validated dataset
4. Return the number of valid values collected

## 3. Write the code
~~~c
#include <stdio.h>
#define NONUM 0
#define YESNUM 1
int getarray(int array[], int limit){
    int num, status;
    int index = 0;      /* array index*/

    printf("This program stops reading numbers after %d ", limit);
    printf("Values\nor type '#' to stop. First value: ");
    do{
        status = scanf("%d", &num);
        if(status == YESNUM){
            array[index++] = num;

		printf("%d accepted. ", num);
        
        if(index < limit) printf("Next value: ");

        }else if(status == NONUM){
            char c;
            printf("That was no integer! Enter an integer to \n");
            printf("Continue or no-numeric input to quit: ");

            scanf(" %c", &c);
            if(c == '#')
                break;
            else
                continue;
        }
        else
            printf("Oops! Program should never reach here!\n");
}
while(index < limit);
    if(index == limit)      /* report if array gets filled */
        printf("All %d elements of the array were filled.\n", limit);

    return (index);
}
~~~
## 4. Test the Module
### 4.1 Test plan
**Objective:**
Verfiry that the module correctly collects integer input from the user, stops on `limit` or termination character `#`, and returns the correct number of valid values.

**What will be tested:**
1. Valid integer input
2. Termination with `#`
3. Handling of invalid/non-numeric input
4. Limit boundary (`limit` reached)
5. Correct value storage in the integer array
6. Correct return value

**Acceptance criteria:**
- Them odule must correctly store only valid integers.
- The module must stop when `#` is entered
- The module must stope when `index == limit`
- The returned value must match the number of valid inputs stored

### 4.2 Test procedure
#### Test Case 1 - Normal input
**Input:** `12 5 9 3 #`

**Steps:**
1. Run the program
2. Enter each integer
3. Enter `#`

**Expected behavior:**
- Value stored: `[12, 5, 9, 3]`
- Returned size `4`
- Program stops after `#`

#### Test Case 2 - Non-numeric input followed by integer
**Input:** `abc 10 11 9 #`

**Steps:**
1. Run the program
2. Enter non-numeric value
3. When prompted, enter integer
4. Continue normally

**Expected behavior:**
- Program detects invalid input
- Continue after correction
- Store values [10, 11, 9]
- Size = 3

#### Test case 3 - Limit reached
**Input:** 100 valid integerr

**Steps:**
1. Run the program.
2. Enter integers until `limit`
3. Stop when program report full array

**Expected behavior:**
- Message: `"All 100 elements were filled"`
- size = 100
- Input no loger accepted

#### Test case 4 - Immediate termination
**Input:** `#`

**Expected behavior:**
- size 0
- NO value stored

#### Test case 5 - Mixed valid and invalid input
**Input:** `5 x 4 y 7 #`

**Steps:**
1. Run the program
2. Enter the data in input
3. Stop the the user type `#`

**Expected behavior:**
- Stored: `5, 4, 7`
- Invalid inputs cause message
- size = 3

### 4.3 Test result
You will fill this manually after running the module.

| Test Case	| Expected Result	| Actual Result	| Pass/Fail	| Observation |
|-----------|-------------------|---------------|-----------|-------------|
| 1         |	size = 4	    |  size = 4     | `Pass`    |             |
| 2         |	size = 3	    |  size = 3     | `Pass`    |             |
| 3         |	size = limit    |  size = limit | `Pass`    |             |
| 4         |	size = 0	    |  size = 4     | `Pass`    |             |
| 5         |	size = 3	    |  size = 3     | `Pass`    |             |			
		
5	size = 3			
## 5. Maintenance
### 5.1 Current limitations
- The module only accepts input from standard input (keyboard)
- Termination character is fixed to `#`
- It relies on `scanf()`, which may not be the most robust method for input handling in large systems
- No validation for integer overflow conditions

### 5.2 Recommendations for futures improvements
- Replace `scanf()` with a safer input-parsing routine (`fgets() + strtol()`)
- Allow customizable termination characters.
- Provide support for reading input from friles or network streamsl.
- Externalize messages to a UI module for intertionalization or custimization
- Add loggin support for debugging and auditing input behavior

### 5.3 Notes for Maintainability
- Any change to the input format requires updating the Test Plan and all related test cases.
- If modifying limit or buffer size, ensure consitency with `sort()` and `print()`
- Keep the module independent: avoid adding sorting or printing logic here.
- Continue enforcing single responsibility: this module should only collect and validate input.
- Follow consisteng error-handling patterns to keep behavior predictable