/*
 * Andrew Hollabaugh
 * 9/14/19
 */

int math(int num1, int num2, char operator)
{
    if(operator == '+')
        return num1 + num2;
    else if(operator == '-')
        return num1 - num2;
    else if(operator == '*')
        return num1 * num2;
    else if(operator == '/')
        return num1 / num2;
    else if(operator == '%')
        return num1 % num2;
    else if(operator == '<')
        return num1 << num2;
    else if(operator == '>')
        return num1 >> num2;
    else if(operator == '&')
        return num1 & num2;
    else if(operator == '|')
        return num1 | num2;
    else if(operator == '^')
        return num1 ^ num2;
    else if(operator == '~')
        return ~num1;
}

