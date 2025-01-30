#include <hvx_hexagon_protos.h>
#include <hexagon_protos.h>
#include <hexagon_types.h>
#include <stdio.h>

int main()
{
    uint32_t splat_val = 0x40404040;
    printf("Splatting HVX vector with a word: a = %lx\n", splat_val);

    HVX_Vector v1 = Q6_V_vsplat_R(splat_val);

    unsigned int *v_ptr = (unsigned int *)&v1;
    for (int i = 0; i < 32; i++)
    {
        printf("v[%d] = %x\n", i, v_ptr[i]);
    }

    return 0;
}
