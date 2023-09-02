#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char count(string str)
{
    // Create arr of char count
    int arr[26] = {0}, num = 0;
    char ch;
    for (int i = 0; i < str.length(); i++)
    {
        ch = str[i];
        num = ch - (ch >= 'a' and ch <= 'z' ? 'a' : 'A');
        arr[num]++;
    }

    // Find 1st maximum count
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > maxi)
        {
            ans = i;
            maxi = arr[i];
        }
    }

    // Return position of alphabet + 'a'
    return 'a' + ans;
}
int main()
{
    string str = "Hello";
    cout << count(str);
    return 0;
}