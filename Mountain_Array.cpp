#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int peak_index_binary_search(vector<int> arr, int len)
{
    int start = 0, end = len - 1, mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int peak_index_brute_force(vector<int> arr, int len)
{
    int max = 0, index = 0;
    for (int i = 0; i < len; i++)
    {
        int element = arr[i];
        if (max < element)
        {
            max = element;
            index = i;
        }
    }
    return index;
}

int main()
{
    vector<int> arr{1, 2, 3, 5, 2};
    cout << "Brute Force Index = " << peak_index_brute_force(arr, arr.size()) << endl;
    cout << "Binary Search INdex = " << peak_index_binary_search(arr, arr.size());
    return 0;
}