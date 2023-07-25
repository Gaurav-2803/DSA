#include <iostream>
#include <stdlib.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Approach 1
    int n = 10;
    int bit;
    string bin = "";
    while (n != 0)
    {
        bit = n % 2;
        if (bit == 1)
        {
            bin += "1";
        }
        else
        {
            bin += "0";
        }
        n /= 2;
    }
    reverse(bin.begin(), bin.end());
    cout << bin;

    // Approach 2
    //  int n = 5;
    //  string bin = "";
    //  while (n != 0)
    //  {
    //      int bit = 0;
    //      bit = n & 1;
    //      if (bit == 1)
    //      {
    //          bin += "1";
    //      }
    //      else
    //      {
    //          bin += "0";
    //      }
    //      n >>= 1;
    //  }
    //  cout << bin;
    return 0;
}