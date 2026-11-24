# Lab 9: Loops, Largest and Smallest Values

**Course Section:** CIS-165-W198

## 1. Initial Plan

The program will read a series of integers entered by the user until the sentinel value -99 is entered. A while loop will process the numbers so the program can handle a different number of entries each time.

The program will use the variables `number`, `smallest`, and `largest` to store the current input and the smallest and largest values. A Boolean variable named `has_data` will track whether any valid numbers have been entered.

The first valid number will initialize both `smallest` and `largest`. Each additional number will be compared against these values. If a number is smaller than `smallest`, the smallest value will be updated. If a number is larger than `largest`, the largest value will be updated.

The sentinel value -99 will stop the loop and will never be included in the calculations. If -99 is entered first, the program will display a message indicating that no data values were entered.

The expected output will display the smallest and largest values with clear labels.
## 2. Compile and Run Instructions

The program was tested using OnlineGDB with the C++17 standard.

## 3. Test Results

### Test 1: Positive numbers
- Input: 8, 3, 12, -99
- Expected: Smallest 3; Largest 12.
- Actual: Smallest 3; Largest 12.
- Result: PASS. Verified that the program correctly updates both values and excludes the sentinel.

### Test 2: Negative numbers
- Input: -8, -3, -12, -99
- Expected: Smallest -12; Largest -3.
- Actual: Smallest -12; Largest -3.
- Result: PASS. Verified that negative numbers are processed correctly and the sentinel is excluded.

### Test 3: Single value
- Input: 5, -99
- Expected: Smallest 5; Largest 5.
- Actual: Smallest 5; Largest 5.
- Result: PASS. Verified that both values initialize correctly from a single entry.

### Test 4: Repeated zeros
- Input: 0, 0, -99
- Expected: Smallest 0; Largest 0.
- Actual: Smallest 0; Largest 0.
- Result: PASS. Verified that zero is treated as valid data.

### Test 5: Empty series
- Input: -99
- Expected: No data values were entered.
- Actual: No data values were entered.
- Result: PASS. Verified that an empty series does not display invented extrema.

### Test 6: Additional mixed-value series
- Input: 14, -25, 7, 0, 31, -99
- Expected: Smallest -25; Largest 31.
- Actual: Smallest -25; Largest 31.
- Result: PASS. Verified that positive numbers, negative numbers, zero, and multiple extrema updates work together.

## 4. Code Explanation

### Trace one series through the loop

For the input 8, 3, 12, -99, the first number 8 initializes both smallest and largest to 8. The next number, 3, is smaller than the current smallest, so smallest becomes 3. The next number, 12, is larger than the current largest, so largest becomes 12. When -99 is entered, the loop stops.

### How does the code keep -99 out of the calculations?

The while loop checks whether the entered number is different from the sentinel value -99. When -99 is entered, the loop ends before the number can be processed.

### Why is initializing both extrema to zero incorrect for some series?

If all entered numbers are negative, initializing both values to zero could incorrectly make zero appear to be the largest value even though it was never entered.

### How do you distinguish an empty series from a series containing zero?

The Boolean variable has_data tracks whether a valid number was entered. If it remains false, the series is empty. If zero is entered, has_data becomes true, so zero is treated as valid data.
