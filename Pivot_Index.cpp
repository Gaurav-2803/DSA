#include <iostream>
#include <vector>
using namespace std;
int lsum(int start, int end, vector<int> num)
{
    int sum;
    for (int i = start; i < end; i++)
    {
        sum = sum + num[i];
    }
    return sum;
}
int rsum(int start, int end, vector<int> num)
{
    int sum;
    for (int i = start; i <= end; i++)
    {
        sum = sum + num[i];
    }
    return sum;
}
int main()
{
    // vector<int> nums = {1, 7, 3, 6, 5, 6};
    // vector<int> nums = {2, 1, -1};
    vector<int> nums = {2, 1, 3};
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;

    while (mid <= end)
    {
        int leftsum = lsum(start, mid, nums);    // 0 2
        int rightsum = rsum(mid + 1, end, nums); // 2 5
        if (mid == start)
        {
            leftsum = 0;
        }
        if (mid == end)
        {
            rightsum = 0;
        }

        cout << "Mid = " << mid << " LS = " << leftsum << " RS = " << rightsum << endl;

        if (leftsum == rightsum)
        {
            cout << "Index = " << mid;
            break;
        }
        else if (leftsum < rightsum)
        {
            mid++;
        }
        else
        {
            mid--;
        }
    }
    cout << -1;
}