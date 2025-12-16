# CHANGELOG

All notable change of [01-exercise] will be documented in this file.

## Unreleased

### Planned

## [1.0.0] 2025-12-16
### Added
- `getarray()` : Collects integer data from user input and stores it in an array.
- `sort()` : Reorders array elements in descending order. Operates in place.
- `print()` : Displays array values before and after sorting.

### Notes
- This release marks the **MVP completion** of the Sorting System.
- Core functionality (Input, Process, Output) is now stable and auditable.

## [0.3.0] 2025-12-10
### Added
- `sort()` 

**Purpose:**
Sort an integer array in descending order (highest to lowest) using selecion sort algorithm.
The sorting is perfomed in-place modifying the original array.

**Inputs:**
- `array` - An integer array that contain inputs to be sort
- `limit` - Number of elements in `array`


**Process:**
   1. Initialize local variables:
     -  @top - Outer loop index (curren position bein filled)
     -  @search - Inner loop index (searching remaining elements)
     -  @temp - Temporary storege for swap operation

   2. For each position @top from 0 to @limit -1:
     -  (a) Assume current elements is the largest
     -  (b) Search remaining elements ()
     -  (c) If elements at @search is largesr that elements at @top
           - Swap then (array[search] <-> array[top])
     -  (d) Continuel until all position processed

   3. After completion, array is sorted in descending order

**Output:**
   All perfoms on this function will be reflected on @array

## [0.2.0] 2025-12-9
### Added
- `print()`

**Purpose:**
This module is a subsystem that allows the `Sorting Integer system` to print data to the user it acts as a console interface module

**Inputs:**
- `array` - Integer array
- `limit` - Number of elements in `array`
  
**Process:**
   1. Declare index variable
   2. Go throug from @index to @limit
   3. Print a value on @array[@index]
   4. Evaluate if @index % is equal 9 or 10 elements to print a new line
   5. To loop end and @index is no % 0 print a new line

**Output**
   - List of integer value to the use via console

## [0.1.0] 2025-12-9
### Added
- `getarray()` 

**Purpose:**
Read a sequence of integer values from standard input and store them
into the provided integer array. Inputs when the array reaches its limit
or when the user enters the termination character '#'

**Inputs:**
- `numbers` - An integer array to store each valid integer input
- `limit`   - Maximum number of elements allowed in `numbers`

**Process:**
1. Initialized local variables:
   1. `numbers` - Stores the integer read
   2. `status` - Stores the `scanf()` returns status (valid/invalid) input
   3. `index` - Track the number of integer successfully read.

2. Prompt the userr to enter integer values. 

3. For each input:
    - (a) If `scanf()` successfully reads an integer
      - Store the value into @numbers[index]
      - Increment index
      - Prompt for the next input
    
    - (b) If scanf() fails (non-numeric) input
      - Read the offending character
      - If the character is '#' terminate input collection
      - Otherwise, inform the user and continue prompting

4. If `index` reaches `limit`
   - Display a message indicating the array is full

5. Return the total number of valid integers stored in `numbers`  