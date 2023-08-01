#include <iostream>
using namespace std;
int main()
{
    int arr[] = {23, 43, 43, 45, 89, 76}, size = 6;
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        if (start == end)
        {
            cout << arr[start];
        }
        else
        {
            cout << arr[start] << endl;
            cout << arr[end] << endl;
        }
        start++;
        end--;
    }
    return 0;
}