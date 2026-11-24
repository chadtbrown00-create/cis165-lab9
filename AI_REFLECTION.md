# Lab 9 AI Reflection

## Tools
I used ChatGPT to help understand the assignment requirements, develop my initial plan, review my C++ code, and understand how the while loop and sentinel value work. I used OnlineGDB with C++17 to compile and test my program.

## One Decision
One important programming decision was initializing the smallest and largest values using the first valid number instead of assuming they should start at zero. I also used a Boolean variable called `has_data` to determine whether the user entered any valid numbers. This allows the program to handle negative numbers, zero, and an empty series correctly.

## Specific Check
I tested the input -8, -3, -12, -99. The program displayed a smallest value of -12 and a largest value of -3. This established that the program correctly processes negative numbers and excludes the sentinel. I also tested entering -99 immediately and confirmed that the program displayed a no-data message instead of displaying minimum and maximum values.

## Learning
I learned how to use a while loop to process a variable number of inputs and how to compare values to find the smallest and largest numbers. I can now explain how the sentinel stops the loop and how the first valid number initializes both extrema. I still need to practice writing loops independently and identifying edge cases before testing my programs.
