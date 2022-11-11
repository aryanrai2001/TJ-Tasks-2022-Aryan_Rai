#include <stdio.h>
#include <stdint.h>

int isPowerOfTwo(int x)
{
    if (x < 1)
      return 0;
    double n = x;
    uint64_t r = *((uint64_t*)(&n));
    r = (r << 12);
    return r == 0;
}

int main()
{
    isPowerOfTwo(31) ? printf("Yes\n") : printf("No\n");
    isPowerOfTwo(32) ? printf("Yes\n") : printf("No\n");
    isPowerOfTwo(33) ? printf("Yes\n") : printf("No\n");
    isPowerOfTwo(64) ? printf("Yes\n") : printf("No\n");
    return 0;
}