#include <hvx_hexagon_protos.h>
#include <hexagon_protos.h>
#include <hexagon_types.h>
#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t num1 = -12345;
    int32_t num2 = 67890;
    
    int32_t abs_num1 = Q6_R_abs_R(num1);
    int32_t abs_num2 = Q6_R_abs_R(num2);

    printf("Absolute value of num1 (%ld): %ld\n", num1, abs_num1);
    printf("Absolute value of num2 (%ld): %ld\n", num2, abs_num2);

    return 0;
}
