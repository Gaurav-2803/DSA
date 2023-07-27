#include <iostream>
using namespace std;

int main()
{
    int arr[] = {-1, 2, 3, 88, 0, 23, 4};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < len; i++)
    {
        bool swapped = false;
        for (int j = 0; j < len - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}