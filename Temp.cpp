//-------------------//
//   Hassan Shahzad //
//      i180441    //
// FAST-NUCES ISB //

#include <iostream>
using namespace std;

int searchElement(int **arr, int n, int num)
{
    int i = 0;              // Outer loop will start from the first index       
    int j = n - 1;          //Inner loop will start from the outer index        
    
    
    while (i < n && j >= 0)             //Loop keeps running till every row/column is searched      
    {
        if (arr[i][j] == num)             //If the number is found at Row 0, Column n           
        {
            cout << "The element is found at the position = [" << i <<"]["<< j <<"]"<< endl;
            return 1;
        }

// Divide and Conquer (The element is compared and if it is less/greater, action is taken accordingly. E.g If element is greater then we will...
//...simply move to the next row instead of checking the first row

        else if (arr[i][j] > num)         //If the current number is greater than the number to be searched
            j--;                        //Move to the previous column as the array is sorted in ascending order.
        
        else                            //If the current number is smaller than the number to be searched    
            i++;                        //Move to the next row as array is sorted in ascending order
    }
    cout << "The given element is not found!! " << endl;             //If element is not found in the whole array
    return 0;
}

int main()
{
    int val, size;
    int** arr;                                                          //Array is declared

    cout << "Enter the number of rows and columns = ";                  //Asks user to enter the value to be set as the number or rows and columns
    cin >> size;

    arr = new int* [size];                                              //Assigning memory to the array
    for (int i = 0; i < size; i++)
    {
        arr[i] = new int[size];
    }

    for (int i = 0; i < size; i++)                                      //Entering values in an array
    {
        for (int j = 0; j < size; j++)
        {
            cout << "Enter value at [" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }


    cout << "The given array in matrix form is :" << endl;              //We will display the original array
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Enter the value to search = ";                     //Asks user to enter the value he/she wants to search
    cin >> val;

    searchElement(arr, size, val);                                 //Will search for the element the user entered
}