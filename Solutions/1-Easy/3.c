#include <stdio.h>

int commonFactors(int a, int b) 
{
    if (a > b)
        b = a+b-(a=b);
    int count = 1;
    for (int i = 2; i <= b; i++)
        if (a % i == 0 && b % i == 0)
            count++;
    return count;
}

int main()
{
    printf("%d\n", commonFactors(12, 6));
    printf("%d\n", commonFactors(25, 30));
}