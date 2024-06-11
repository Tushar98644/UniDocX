## One's Complement and Two's Complement

**One's Complement**: In one's complement representation, the negative of a binary number is formed by flipping all the bits (changing 0s to 1s and vice versa). For example, if the binary representation of 5 is 0101, then the one's complement of 5 is 1010.

**Two's Complement**: In two's complement representation, the negative of a binary number is formed by taking the one's complement and then adding 1 to the least significant bit. For example, the two's complement of 5 is obtained by taking the one's complement of 5 (1010) and adding 1, resulting in 1011.

## Bitwise Operators

1. **AND (`&`)**: Performs a bitwise AND operation between two operands. Each bit of the output is 1 if both corresponding bits of the operands are 1; otherwise, it's 0.
   - Example: `5 & 3` is `0101 & 0011 = 0001`, which is 1.

2. **OR (`|`)**: Performs a bitwise OR operation between two operands. Each bit of the output is 0 if both corresponding bits of the operands are 0; otherwise, it's 1.
   - Example: `5 | 3` is `0101 | 0011 = 0111`, which is 7.

3. **XOR (`^`)**: Performs a bitwise XOR (exclusive OR) operation between two operands. Each bit of the output is 1 if the corresponding bits of the operands are different; otherwise, it's 0.
   - Example: `5 ^ 3` is `0101 ^ 0011 = 0110`, which is 6.

4. **NOT (`~`)**: Performs a bitwise NOT operation on a single operand. It flips each bit of the operand, changing 0s to 1s and 1s to 0s.
   - Example: `~5` is `~0101 = 1010`, which is -6 in two's complement representation.

5. **Left Shift (`<<`)**: Shifts the bits of the first operand to the left by the number of positions specified by the second operand. Bits shifted out of the high-order end are discarded, and zero bits are shifted in from the low-order end.
   - Example: `5 << 1` is `0101 << 1 = 1010`, which is 10.
   - Example: `3 << 2` is `0011 << 2 = 1100`, which is 12.

6. **Right Shift (`>>`)**: Shifts the bits of the first operand to the right by the number of positions specified by the second operand. For unsigned numbers, zero bits are shifted in from the high-order end. For signed numbers, the behavior is implementation-defined (logical vs. arithmetic shift).
   - Example: `5 >> 1` is `0101 >> 1 = 0010`, which is 2.
   - Example: `14 >> 2` is `1110 >> 2 = 0011`, which is 3.
  
## Integer Limits: `INT_MIN` and `INT_MAX` for 32-bit Signed Integers

In a 32-bit signed integer, the number is represented using two's complement notation, which allows for both positive and negative values.

#### Maximum Value (`INT_MAX`)

1. **Binary Representation**:
   - For the maximum positive value, the most significant bit (MSB) is `0` (indicating a positive number), and all other bits are `1`.
   - Binary: `01111111 11111111 11111111 11111111`.

2. **Decimal Calculation**:
   - This binary number can be calculated as: \(2^{31} - 1\).
   - Decimal: `2147483647`.

#### Minimum Value (`INT_MIN`)

1. **Binary Representation**:
   - For the minimum value, the MSB is `1` (indicating a negative number), and all other bits are `0`.
   - Binary: `10000000 00000000 00000000 00000000`.

2. **Decimal Calculation**:
   - This binary number can be calculated as: \(-2^{31}\).
   - Decimal: `-2147483648`.

### Example

To summarize with an example:

- **INT_MAX**:
  - Binary: `01111111 11111111 11111111 11111111`.
  - Decimal: `2^{31} - 1 = 2147483647`.

- **INT_MIN**:
  - Binary: `10000000 00000000 00000000 00000000`.
  - Decimal: `-2^{31} = -2147483648`.
