# Printf 

#Description

 This is a project that involves customizing the **printf** version  and implenting it in a simplified version so as to mimick the **printf** functions. The main objectives is to handle different conversion specifiers and then produce formatted output to the standard output stream. This custom_printf() was developed by cohort 1 blended students Djimra and George.

#Task 0: Basic Conversion Specifiers

The initial task focuses on handling basic conversion specifiers, namely %c, %s, and %%. The implementation is expected to return the number of characters printed (excluding the null byte used to end output to strings).

#Task 1: Integer Conversion Specifiers

The second task extends the functionality to handle integer conversion specifiers %d and %i.

#Task 2: Custom Binary Conversion Specifier

For the advanced task, a custom conversion specifier %b is introduced to convert an unsigned integer argument to binary.

#Task 3: Additional Integer Conversion Specifiers

This task involves handling additional integer conversion specifiers: %u, %o, %x, and %X.

#Task 4: Local Buffer Optimization

To optimize efficiency, a local buffer of 1024 characters is introduced to minimize calls to the write function.

#Task 5: Custom String Conversion Specifier

This task introduces a custom conversion specifier %S that prints strings, with non-printable characters represented as \x followed by the ASCII code value in hexadecimal.

#Task 6: Pointer Address Conversion Specifier

The implementation handles the conversion specifier %p, which prints the pointer address.

#Task 7: Flag Characters

This task introduces the handling of flag characters +, space, and # for non-custom conversion specifiers.

#Task 8: Length Modifiers

The implementation handles length modifiers l and h for non-custom conversion specifiers (d, i, u, o, x, X).

#Task 9: Field Width

The code is modified to handle the field width for non-custom conversion specifiers.

#Task 10: Precision

The implementation handles precision for non-custom conversion specifiers.

#Task 11: Flag Character '0'

The code handles the '0' flag character for non-custom conversion specifiers.

#Task 12: Flag Character '-'

The implementation handles the '-' flag character for non-custom conversion specifiers.

#Task 13: Custom Reversed String

This task introduces a custom conversion specifier %r that prints the reversed string.

#Task 14: Custom ROT13 String

A custom conversion specifier %R is introduced to print the ROT13'ed string.

#Task 15: All Options Together

The final task combines all the implemented options to work seamlessly together.

## Compilation
The code should be compiled this way:

*$ gcc-Wall-Werror-Wextra-pedantic.c*
