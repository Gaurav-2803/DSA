#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 4, 5, 7, 0, 0, 0};
    vector<int> arr2 = {2, 3, 6};
    int m = arr1.size();
    int n = arr2.size();
    int i = m - n - 1, j = n - 1, k = m - 1;
    while (i >= 0 && j >= 0)
    {
        if (arr1[i] > arr2[j])
        {
            arr1[k] = arr1[i--];
        }
        else
        {
            arr1[k] = arr2[j--];
        }
        k--;
    }
    while (j >= 0)
    {
        arr1[k--] = arr2[j--];
    }
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}