The operation performed is calculating the absolute value of two integers (num1 and num2) using the Hexagon intrinsic Q6_R_abs_R.
This function returns the absolute value of a signed 32-bit integer.

Commands:
$hexagon-clang -mhvx -mv73 -o absvalue absvalue.c

hexagon-sim absvalue

Dependencies: Hexagon SDK must be downloaded in order to compile the code.
