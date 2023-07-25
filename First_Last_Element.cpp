#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int firsto(vector<int> &arr, int n, int k)
{
    int start = 0, end = n - 1, mid = start + (end - start) / 2, ans = -1;

    while (start <= end)
    {
        if (k == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }

        if (k > arr[mid])
        {
            start = mid + 1;
        }

        else if (k < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lasto(vector<int> &arr, int n, int k)
{
    int start = 0, end = n - 1, mid = start + (end - start) / 2, ans = -1;

    while (start <= end)
    {
        if (k == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }

        if (k > arr[mid])
        {
            start = mid + 1;
        }

        else if (k < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

// Brute Force
pair<int, int> brute_force(vector<int> &arr, int n, int k)
{
    pair<int, int> p;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            p.first = i;
            break;
        }
        else
        {
            p.first = -1;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == k)
        {
            p.second = i;
            break;
        }
        else
        {
            p.second = -1;
        }
    }
    return p;
}

// Binary Search
pair<int, int> binary_search(vector<int> &arr, int n, int k)
{
    pair<int, int> p;
    p.first = firsto(arr, n, k);
    p.second = lasto(arr, n, k);
    return p;
}

int main()
{
    vector<int> arr = {1, 2, 2, 3, 3, 3};
    int len = arr.size();
    int element_to_find = 3;

    pair<int, int> bf_pair = brute_force(arr, len, element_to_find);
    cout << "Brute Force : " << bf_pair.first << " " << bf_pair.second << endl;

    pair<int, int> bs_pair = binary_search(arr, len, element_to_find);
    cout << "Binary Search : " << bs_pair.first << " " << bs_pair.second;
    return 0;
}