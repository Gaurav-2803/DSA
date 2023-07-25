#include <iostream>
using namespace std;

double precision(int num, int precs, int integer_sqrt)
{
    double ans = integer_sqrt;
    double fact = 1;
    for (int i = 0; i < precs; i++)
    {
        fact /= 10;
        for (double j = ans; j * j < num; j += fact)
        {
            ans = j;
        }
    }
    return ans;
}

int brute_force(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    int res = 1, i = 1;
    while (res <= num)
    {
        i++;
        res = i * i;
    }
    return i - 1;
}
long long int binary_search(int num)
{
    long long int start = 0, end = num;
    long long int mid = start = (end - start) / 2;
    long long int ans = -1;
    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == num)
        {
            return mid;
        }
        // 1234 5 6789   64
        if (square < num)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int num;
    cout << "NUmber = ";
    cin >> num;
    int bf = brute_force(num);
    int bs = binary_search(num);
    cout << "Brute Force = " << precision(num, 3, bf) << endl;
    cout << "Binay Search = " << precision(num, 3, bs) << endl;
    return 0;
}