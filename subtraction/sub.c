#include <hvx_hexagon_protos.h>
#include <hexagon_protos.h>
#include <hexagon_types.h>
#include <stdio.h>

int main()
{
    HVX_Vector v1 = (HVX_Vector) {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    HVX_Vector v2 = (HVX_Vector) {17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};
    
    HVX_Vector v_result = Q6_Vw_vsub_VwVw(v2, v1);

    unsigned int *v_ptr = (unsigned int *)&v_result;
    for (int i = 0; i < 32; i++)
    {
        printf("v[%d] = %d\n", i, v_ptr[i]);
    }
}
