The code uses the Hexagon HVX vector extension to create a vector where each element holds the same value and then prints the values.

  1.It initializes a 32-bit value 0x40404040 (in hexadecimal).
  2.The Q6_V_vsplat_R function is used to fill all 32 elements of the HVX vector v1 with this value.
  3.The pointer v_ptr is used to treat the vector v1 as an array of 32-bit unsigned integers.
  4.A loop runs 32 times to print each value in the vector. Each value will be 0x40404040, so it prints that 32 times.

  The code is compiled in version v73, so it will operates upto 1024 bits. for integer (1024/32bit = 32 int elements)

  commands to run the code:
  1. $ hexagon-clang -mhvx -mv73 -DLOG2VLEN=7 vsplat.c -o vsplat
       It will create a binary file, which can then be run using the Hexagon simulator.
  2. $ hexagon-sim vsplat

  Dependencies:
  Hexagon SDK must be downloaded in order to compile the code.
     
