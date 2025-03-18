# Finding-numbers

## Student Information
   Name:Natnael Tsedeke
   ID:RMNS-7783-/23
   Course:DSA

## Algorithm to Find the Smallest Number in an Array
1. Start.
2. Input: Define an array of integers numbers[] and determine its size.
3. Check Array Size:
   -If the size of the array is less than or equal to 0:
   -Throw an invalid_argument exception with the message "The array is empty."
4. Initialize: Set the variable smallest to the first element of the array (numbers[0]).
5. Iterate through the Array:
   -For each element in the array from index 1 to size - 1:
   -If the current element (numbers[i]) is less than smallest:
   -Update smallest to numbers[i].
6. Output: Return the value of smallest.
7. Exception Handling:
   -In the main function, wrap the function call in a try-catch block.
   -If an exception is thrown, catch it and print the error message.
8. End.
