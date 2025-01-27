1. Q6_R_sxtb_R (Sign-Extend Byte):

    **Purpose:** Extends the least significant byte (LSB) of a value to a 32-bit result.
    **How it works:** It preserves the sign by copying the most significant bit of the byte into the higher bits of the result.
        If the most significant bit (MSB) of the byte is 1, the extended bits are set to 1 (indicating a negative number).
        If the MSB of the byte is 0, the extended bits are set to 0 (indicating a positive number).

    **Example:**
   
    0x80 in binary: 1000 0000 (the MSB is 1, so it's negative).
    After sign-extending to 32-bits: 0xFFFFFF80
    The 0x80 byte becomes extended by filling the higher bits with 1s to preserve the negative sign.

 2. Q6_R_sxth_R (Sign-Extend Half-Word):

    **Purpose: **Extends the least significant half-word (16 bits) of a value to a 32-bit result.
    **How it works:** Similar to byte extension, it copies the most significant bit of the 16-bit value into the higher bits of the result to preserve the sign.

    **Example:**
    0x8000 in binary: 1000 0000 0000 0000 (the MSB is 1, so it's negative).
    After sign-extending to 32-bits: 0xFFFF8000
    The 0x8000 half-word becomes extended by filling the higher bits with 1s to preserve the negative sign.
