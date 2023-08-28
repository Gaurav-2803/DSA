#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 4, 5, 7};
    vector<int> arr2 = {2, 3, 6};
    vector<int> arr;
    int m = arr1.size();
    int n = arr2.size();
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr.push_back(arr1[i++]);
        }
        else
        {
            arr.push_back(arr2[j++]);
        }
    }
    while (i < m)
    {
        arr.push_back(arr1[i++]);
    }
    while (j < n)
    {
        arr.push_back(arr2[j++]);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }

    return 0;
}