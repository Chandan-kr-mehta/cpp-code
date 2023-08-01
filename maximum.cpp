#include <iostream>
using namespace std;
#include <limits.h>
int main()
{
    int arr[] = {32, 67, 65, 89, 76, 9};
    int maxi;
    maxi = INT_MIN;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    cout << "maxim number :" << maxi;

    return 0;
}