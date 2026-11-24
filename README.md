# Lab 9: Loops, Largest and Smallest Values

**Course Section:** CIS-165-W198

## 1. Initial Plan

The program will read a series of integers entered by the user until the sentinel value -99 is entered. A while loop will process the numbers so the program can handle a different number of entries each time.

The program will use the variables `number`, `smallest`, and `largest` to store the current input and the smallest and largest values. A Boolean variable named `has_data` will track whether any valid numbers have been entered.

The first valid number will initialize both `smallest` and `largest`. Each additional number will be compared against these values. If a number is smaller than `smallest`, the smallest value will be updated. If a number is larger than `largest`, the largest value will be updated.

The sentinel value -99 will stop the loop and will never be included in the calculations. If -99 is entered first, the program will display a message indicating that no data values were entered.

The expected output will display the smallest and largest values with clear labels.
