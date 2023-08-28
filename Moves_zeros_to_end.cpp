#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &arr)
{
    int i = 0;
    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}
int main()
{
    vector<int> arr = {1, 0, 2, 0, 8};
    moveZeroes(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    return 0;
}