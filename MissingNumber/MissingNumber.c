/*
    Question: Assume that you are given a number n and a sorted
              array of integers containing unique n-1 integers
              from the interval [1, n]. Can you find which number
              is missing in the array?

    Example:
    Given: N = 10 and some number missing (missing = 0)
    Input: arr[] = {1, 2, 4, 6, 3, 0, 7, 8, 9, 10}
    Output: 5

    Time Complexity: O(n) - because array is iterated and elements are summed
*/

#include<stdio.h>

void main(){

    // Input (Can be array of any size with any one variable missing)
    // (missing variables are set to 0)
    int arr[10] = {1, 3, 2, 4, 6, 0, 9, 8, 7, 10};

    // Variables
    int sum = 0, index = 0, output;

    // Gets length of input array
    int length = sizeof(arr)/sizeof(arr[0]);

    // Add each element of the array
    for(int i = 0; i < length; i++){

        sum += arr[i];

        // Assuming the "missing value" is 0 then this
        // will determine the index of the missing value
        if(arr[i] == 0){
            index = i;
        }//end if

    }//end for

    // Subtract the sum of the array values from the expected sum of values
    // Expected sum of values follows this formula: [(N+1) * N / 2]
    output = (((length + 1) * length) / 2) - sum;

    // Print missing number
    printf("Missing number is: %d at position: %d", output, index);

}//end main
