#include <hvx_hexagon_protos.h>
#include <hexagon_protos.h>
#include <hexagon_types.h>
#include <stdio.h>

int main() {
    HVX_Vector v1;

    v1 = Q6_V_vzero(); // Initialize the vector to zero

    unsigned int *v1_ptr = (unsigned int *)&v1;  // Treat the vector as an array of unsigned int using ptr

    for (int i = 0; i < 4; i++) {
        printf("v1[%d] = %x\n", i, v1_ptr[i]);  
    }

    return 0;
}
