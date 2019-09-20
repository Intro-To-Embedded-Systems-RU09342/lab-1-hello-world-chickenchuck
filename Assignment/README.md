Andrew Hollabaugh
9/14/18

math - do a specified numerical operation on two numbers

`math(int num1, int num2, char operator)`
`num1` - first operand
`num2` - second operand
`operator` - character indicating which operation to perform

Operations:
Add - `'+'`

Subtract - `'-'`

Multiply - `'*'`

Divide - `'/'`
*Note: if `num2` is zero, then zero is returned*

Modulus - `'%'`
*Note: if `num2` is zero, then zero is returned*

Left Bitwise Shift - `'<'`
*Note: if `num2` is negative, then `num1` is returned*

Right Bitwise Shift - `'>'`
*Note: if `num2` is negative, then `num1` is returned*

Bitwise AND - `'&'`

Bitwise OR - `'|'`

Bitwise XOR - `'^'`

Bitwise NOT - `'~'`
*Note: `num2` is ignored*

