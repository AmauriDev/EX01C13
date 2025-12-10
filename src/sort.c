/* 
* =====================================
* Module: sort()
* =====================================
*   - Read an integer array and analyze each value to be sorted from higher to smaller.
*   Sort an integer array in descending ordern (highest to lowest)
*   using selection sort algorithm. The sorting is performed in-place modifying the original array.
*
*   Implement SRS FR-3. "Perfom sorting from Highest to lowest"
*   Satisfies AC-2: "System sorts all elements in descending order"
*
* =====================================
* Inputs:
* =====================================
*   @array - An integer array that contain inputs to be sort
*   @limit - Number of elements in @array
*
* =====================================
* Process:
* =====================================
*   Algorithm: Selection Sort (descending)
*
*   1. Initialize local variables:
*       @top - Outer loop index (curren position bein filled)
*       @search - Inner loop index (searching remaining elements)
*       @temp - Temporary storege for swap operation
*
*   2. For each position @top from 0 to @limit -1:
*       a) Assume current elements is the largest
*       b) Search remaining elements ()
*       c) If elements at @search is largesr that elements at @top
*           - Swap then (array[search] <-> array[top])
*       d) Continuel until all position processed
*
*   3. After completion, array is sorted in descending order
*
* =====================================
* Output / Return
* =====================================
*   All perfoms on this function will be reflected on @array
*/
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