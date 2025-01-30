#include <hvx_hexagon_protos.h>
#include <hexagon_protos.h>
#include <hexagon_types.h>
#include <stdio.h>

int main()
{
    int32_t val1 = 10, val2 = 5, shift = 2;

    int32_t add_result = Q6_R_add_RR(val1, val2);
    printf("Add result: %ld\n", add_result);

    int32_t sub_result = Q6_R_sub_RR(val1, val2);
    printf("Subtraction result: %ld\n", sub_result);

    int32_t abs_result = Q6_R_abs_R(val1);
    printf("Absolute value: %ld\n", abs_result);

    int32_t and_result = Q6_R_and_RR(val1, val2);
    printf("AND result: %x\n", and_result);

    int32_t or_result = Q6_R_or_RR(val1, val2);
    printf("OR result: %x\n", or_result);

    int32_t xor_result = Q6_R_xor_RR(val1, val2);
    printf("XOR result: %x\n", xor_result);

    int32_t min_result = Q6_R_min_RR(val1, val2);
    printf("Minimum result: %ld\n", min_result);

    int32_t max_result = Q6_R_max_RR(val1, val2);
    printf("Maximum result: %ld\n", max_result);

    return 0;
}
