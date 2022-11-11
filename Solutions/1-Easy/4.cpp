#include <iostream>

using namespace std;

int maximum69Number (int num) 
{
    float n = num;
    while (n > 1) n /= 10;
    do
    {
        n *= 10;
    } while ((int)n % 10 == 9);
    if ((int)n % 10 != 6) return num;
    n += 3;
    while ((int)n % 10 == 9 || (int)n % 10 == 6)
    {
        n *= 10;
    }
    if ((int)n % 10 != 0)
    {
        n++;
        n *= 10;
    }
    return (int) n / 10;
}

int main()
{
    cout << maximum69Number(66) << endl;
    cout << maximum69Number(9696) << endl;
    cout << maximum69Number(6969) << endl;
    cout << maximum69Number(9999) << endl;
}