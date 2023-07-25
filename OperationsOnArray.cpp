#include <iostream>
#include <stdlib.h>
using namespace std;

// Display Declaration
void display(int *, int);

// Reverse Function
void reverse(int arr[], int size)
{
    /* Gaurav :: Approach 1 :: Big O = 'log n' but Space complexity is more*/
    // int size1 = (size % 2 == 0) ? size / 2 : (size - 1) / 2;
    // for (int i = 0; i < size1; i++)
    // {
    //     swap(arr[i], arr[size - i - 1]);
    // }

    /* Gaurav :: Approach 2 :: Big O = 'n'*/
    // int ar[5];
    // for (int i = 0; i < size; i++)
    // {
    //     ar[i] = arr[size - i - 1];
    //     cout << ar[i] << " ";
    // }
    // cout << endl;

    /* Love Babbar :: Big O = 'log n'*/
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    display(arr, size);
}

// Swap Alter Function
void swap_alter(int arr[], int size)
{
    for (int i = 0; i < size - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
    display(arr, size);
}

// Unique Function
// Approach 1
// int unique(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int counter = 0;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 counter++;
//             }
//         }
//         if (counter == 0)
//         {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }

// Approach 2
void unique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }
    cout << ans << endl;
}

// Duplicate Function :: Big O = 'n(log n)'
// Approach 1
// int duplicate(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int counter = 0;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 counter++;
//             }
//         }
//         if (counter != 0)
//         {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }

// Approach 2
int duplicate(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        ans ^= i;
    }
    cout << ans << endl;
}

// Display Initialization
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr1[5] = {1, 1, 2, 3, 4}, arr2[4] = {1, 1, 2, 4};
    int choice;
    cout << "1.Display\n2.Reverse\n3.Swap Alternate\n4.Unique\n5.Duplicate\n6.Pair Sum\n7.Triplet Sum\n8.Sort 0's & 1's\n------------\nEnter Choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1: // Display
        cout << "Array 1 = ";
        display(arr1, 5);

        cout << "Array 1 = ";
        display(arr2, 4);
        break;

    case 2: // Reverse
        cout << "Reversed Array 1 = ";
        reverse(arr1, 5);

        cout << "Reversed Array 2 = ";
        reverse(arr2, 4);
        break;

    case 3: // Swap Alternate
        cout << "Altered Array 1 = ";
        swap_alter(arr1, 5);

        cout << "Altered Array 2 = ";
        swap_alter(arr2, 4);
        break;

    case 4: // Unique
        cout << "Unique Element in Array 1 = ";
        unique(arr1, 5);

        cout << "Unique Element in Array 2 = ";
        unique(arr2, 4);
        break;

    case 5: // Duplicate
        // cout << "Duplicate Element in Array 1 = ";
        // duplicate(arr1, 5);

        cout << "Duplicate Element in Array 2 = ";
        duplicate(arr2, 4);
        break;

    default:
        cout << "Error!!!";
    }
    return 0;
}
// Google It : big o n vs logn