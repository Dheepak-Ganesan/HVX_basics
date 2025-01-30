The operation performed is element-wise addition of two Hexagon vectors, v1 and v2. 
The intrinsic Q6_Vw_vadd_VwVw adds each corresponding element of v1 and v2, resulting in a new vector v_result. 

Commands:
$ hexagon-clang -mhvx -mv73 -DLOG2VLEN=7 vec_addition.c -o vec_addition


Dependencies: Hexagon SDK must be downloaded in order to compile the code.
