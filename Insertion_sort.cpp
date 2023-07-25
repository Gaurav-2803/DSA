#include <iostream>
using namespace std;

void display_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {2, 15, 14, 6, -1, 9, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    /* Using for loop */
    // for (int i = 1; i < n; i++)
    // {
    //     int temp = arr[i];
    //     int j = i - 1;
    //     for (; j >= 0; j--)
    //     {
    //         if (arr[j] > temp)
    //         {
    //             arr[j + 1] = arr[j];
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     arr[j + 1] = temp;
    // }

    /* Using while loop */
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    // Display Array
    display_arr(arr, n);
    return 0;
}