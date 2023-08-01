#include <iostream>
#include <limits.h>
int main()
{
    int arr[5] = {32, 66, 87, 89, 65};
    int maxi = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    cout << "maximum number is :" << maxi << endl;

    return 0;
}