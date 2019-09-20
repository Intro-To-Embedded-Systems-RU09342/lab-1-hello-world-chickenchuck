/*
 * Andrew Hollabaugh
 * 9/14/19
 */

int math(int num1, int num2, char operator)
{
    switch (operator)
    {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return num2 == 0 ? 0 : num1 / num2;
        case '%': return num2 == 0 ? 0 : num1 % num2;
        case '<': return num2 > 0 ? num1 << num2 : num1;
        case '>': return num2 > 0 ? num1 >> num2 : num1;
        case '&': return num1 & num2;
        case '|': return num1 | num2;
        case '^': return num1 ^ num2;
        case '~': return ~num1;
    }
}
