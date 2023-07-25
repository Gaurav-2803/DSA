#include <iostream>
#include <stdlib.h>
using namespace std;

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n, r;
    cout << "Enter n & r = ";
    cin >> n >> r;
    cout << n << "C" << r << " = " << fact(n) / (fact(r) * fact(n - r)) << endl;
    cout << n << "P" << r << " = " << fact(n) / (fact(n - r));
    return 0;
}
