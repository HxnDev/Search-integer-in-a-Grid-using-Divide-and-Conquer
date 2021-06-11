# Search-integer-in-a-Grid-using-Divide-and-Conquer

## Part A (Algorithm)

```
- Declare i as zero so it starts from the first element
- Declare j as “n (size of array)” so it may start from the last element
- We will use a loop which will run **“i”** from **_0 - n_** and **“j”** from **_(n- 1 )- 0_**.
- If the element is found at the initial location (i.e. [i][j]), then it will print it.
- If the number at given location is greater than the number we want to search (i.e. [i][j] > val), then we
    will decrement ‘j’ so that we compare the next small value in that row.
- If the number at given location is smaller than the number we want to search (i.e. [i][j] < val), then we
    will increment ‘i’ so that we compare the next large value in the next row.
- This loop will keep running till it finds the value we are looking for
- If value is not present, it will return error message.
```

## Part B (Code)

```
Attached in the main branch. The file name is "Temp.cpp" and "Temp.vcxproj".
(Note: You can simply double click “temp.vcxproj” file. It will directly open the project and
you can then simply click “Run”)
```

## Part C (Time Complexity)

```
The time complexity of my algorithm will O(n²) in the worst case. As in the worst case, the
element to be found will be in _location [n][ 0 ]._ **Divide and Conquer** is being used in the function too. The element to
be searched is compared and if it is less/greater, action is taken accordingly. For instance, if the element to be searched
is greater than the element on current row & column, we will simply jump to the next row instead of checking the
current row further. Similarly, if the element to be found is nowhere, then the loop will continue to iterate and will
cause searching every element of the last row, hence time complexity will be O(n²). Further breakdown of the time
complexity is as follows:

- Variable declaration = 1 + 1 = 2
- While loop = nxn ( 1 st n = i (0-n), 2 nd n = j ((n- 1 )-0))
- If conditions = 1 + 1 + 1 = 3
```
