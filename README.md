## Description
This programming assignment involves the implementation of a Rational class for working with rational numbers. The main function is provided, and your task is to create rational.h and rational.cpp files to define and implement the Rational class. The class should have a default constructor and convert constructors that accept two integers or strings representing fractions (e.g., "3/4"). Additionally, you are required to implement a type conversion operator that allows assigning a Rational datatype to a double. Arithmetic operations such as +, -, *, and / operators should be overloaded for the Rational class. Finally, the stream insertion operator (<<) should be overloaded as a stand-alone function to display Rational numbers on the screen.
Example Output

## Example of output

```
num0 = 1/1
num1 = 12/16
num2 = 12/16
num2 as a decimal = 0.75
num3 = 12/16
Reduced num3 = 3/4
num4 = 3/-4
Reduced num4 = -3/4
num5 = 0.75
num1 = 3/7
3/7 + 12/16 = 33/28
3/7 - 12/16 = -9/28
3/7 * 12/16 = 9/28
(3/7) / (12/16) = 4/7
3/4 + 3/7*12/16 = 15/14
```

## Files
rational.h: Header file containing the declaration of the Rational class.
rational.cpp: Source file containing the implementation of the Rational class methods.
