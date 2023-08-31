#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &res)
{
    int i = 0, j = res.size() - 1;
    while (i < j)
    {
        swap(res[i++], res[j--]);
    }
}
vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    // Write your code here.
    int num1 = 0;
    for (int i = 0; i < n; i++)
    {
        num1 *= 10;
        num1 += a[i];
    }
    int num2 = 0;
    for (int i = 0; i < m; i++)
    {
        num2 *= 10;
        num2 += b[i];
    }
    int num = num1 + num2;
    vector<int> res;
    while (num > 0)
    {
        int temp = num % 10;
        res.push_back(temp);
        num /= 10;
    }
    reverse(res);
    return res;
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5}, b = {5, 4, 3, 2, 1};
    cout << "The sum of the two arrays is: ";
    vector<int> res_arr = findArraySum(a, a.size(), b, b.size());
    for (auto x : res_arr)
    {
        cout << x;
    }
    return 0;
}