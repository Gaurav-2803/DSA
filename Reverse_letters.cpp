#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse_word(string &str, int i, int j)
{
    while (i < j)
    {
        swap(str[i++], str[j--]);
    }
}
int main()
{
    string str = "My name is Gaurav";
    int i = 0, j = 1, len = str.size();
    while (j != len)
    {
        if (str[j] == ' ')
        {
            reverse_word(str, i, j - 1);
            i = j + 1;
        }
        else if (j == len - 1)
        {
            reverse_word(str, i, j);
        }
        j++;
    }
    cout << str;
    return 0;
}