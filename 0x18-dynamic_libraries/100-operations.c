#include <stdio.h>

int add(int a, int b)
{
    return (a + b);
}

int sub(int a, int b)
{
    return (a - b);
}

int mul(int a, int b)
{
    return (a * b);
}

int div(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by Zero\n");
        return (0);
    }
    return (a / b);
}

int mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Modulas by Zero\n");
        return (0);
    }
    return (a % b);
}
