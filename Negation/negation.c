#include <stdio.h>
#include "hexagon_protos.h"

// Negates the input value
// step 1: Calculates the 1s complement (in binary value) i.e a5a5a5a5 ==> 5a5a5a5a 
// step 2: Adds 1 to it (2's complement) i.e 5a5a5a5a ==> 5a5a5a5b

int main()
{
    unsigned int input1 = 0xa5a5a5a5;
    printf("input1 = %x\n", input1);
    input1 = Q6_R_neg_R(input1); 
    printf("Negation of input1 is = %x\n", input1);
    
    printf("\n");
    
    unsigned int input2 = 0x34ab34ab;
    printf("input2 = %x\n", input2);
    input2 = Q6_R_neg_R(input2); 
    printf("Negation of input2 is = %x\n", input2);

    return 0;
}
