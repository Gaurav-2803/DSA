#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char> &s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        swap(s[i++], s[j--]);
    }
}
int main()
{
    vector<char> s = {'a', 'b', 'c', 'd'};
    reverseString(s);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
    return 0;
}