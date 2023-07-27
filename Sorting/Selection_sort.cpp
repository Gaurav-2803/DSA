#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 88, 0, 23, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        int min = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }   
    return 0;
}