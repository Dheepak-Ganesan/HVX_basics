#include <stdio.h>
#include "hexagon_protos.h"

int main()
{
    unsigned int A = 0x12121212, B = 0x34343434, add;

    add = Q6_R_add_RR(A, B);
    printf("A = %x\n", A);
    printf("B = %x\n", B);
    printf("Add = %x\n", add);

    unsigned int C = 0x32143241, D = 0x23467980, result;
    result = Q6_R_add_RR(C, D);
    printf("C = %x\n", C);
    printf("D = %x\n", D);
    printf("Result = %x\n", result);
}
