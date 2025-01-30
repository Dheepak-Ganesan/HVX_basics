The operation performed is the element-wise subtraction of two Hexagon vectors, v1 and v2. 
The Q6_Vw_vsub_VwVw intrinsic subtracts each corresponding element of v1 from v2, resulting in a new vector v_result. 
The program then prints each element of v_result, which contains the difference between the corresponding elements of v1 and v2.

Command:
$ hexagon-clang -mhvx -mv73 -DLOG2VLEN=7 sub.c -o sub

$ hexagon-sim sub

Dependencies: Hexagon SDK must be downloaded in order to compile the code.
