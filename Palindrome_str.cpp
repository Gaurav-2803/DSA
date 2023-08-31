#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool is_alphanum(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

char to_lower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        return (ch - 'A' + 'a');
    }
}

bool checkPalindrome(string s)
{
    int start = 0, end = s.size() - 1;
    while (start < end)
    {
        if (!is_alphanum(s[start]))
        {
            start++;
        }

        else if (!is_alphanum(s[end]))
        {
            end--;
        }

        else if (to_lower(s[start]) != to_lower(s[end]))
        {
            return false;
        }

        else
        {
            start++;
            end--;
        }
    }
    return true;
}
int main()
{
    string res = checkPalindrome("^a&bcb&$a") == 0 ? "False" : "True";
    cout << res;
    return 0;
}