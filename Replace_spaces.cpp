#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello Good Night";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str.replace(i, 1, "@40");
            i += 2;
        }
    }
    cout << str;
    return 0;
}