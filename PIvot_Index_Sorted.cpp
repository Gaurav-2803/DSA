#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {5, 6, 7, 1, 2, 3};
    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    cout << "Pivot Index = " << start;
    return 0;
}