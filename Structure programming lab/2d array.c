#include <stdio.h>

// Recursive function to find the GCD
int gcd(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else if(a == 1)
    {
        return 1;
    }
    else
    {
        return gcd(a-1) + gcd(a-2); // n * (n-1)
    }
}

int main()
{
    int num1;

    printf("Enter two positive integers: ");
    scanf("%d", &num1);


    int result = gcd(num1);

    printf("The Factorial: %d",  result);

    return 0;
}

