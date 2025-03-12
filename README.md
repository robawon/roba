# roba

## Student Information
  Name: Robel Wondwesen
  ID: RNS-0752-/23
  Course: DSA

 ## Algorithm
 Algorithm to Find Second and Third Largest Numbers
Input the Array:
Read the number of elements, n.
Initialize an empty array or vector to store n integers.
Read n integers into the array.
Function to Find Second Largest:
Initialize two variables, first and second, to the minimum integer value.
For each number in the array:
If the number is greater than first:
Assign second to first.
Update first to the current number.
Else if the number is greater than second and not equal to first:
Update second to the current number.
If second remains the minimum integer value, return -1 (indicating no second largest exists).
Otherwise, return second.
Function to Find Third Largest:
Initialize three variables, first, second, and third, to the minimum integer value.
For each number in the array:
If the number is greater than first:
Assign third to second.
Assign second to first.
Update first to the current number.
Else if the number is greater than second and not equal to first:
Assign third to second.
Update second to the current number.
Else if the number is greater than third, not equal to first, and not equal to second:
Update third to the current number.
If third remains the minimum integer value, return -1 (indicating no third largest exists).
Otherwise, return third.
Main Function:
Prompt the user to enter numbers and store them in the array.
Ask the user to choose whether to find the second or third largest number.
Call the corresponding function and display the result.
  
