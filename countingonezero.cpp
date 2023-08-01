#include <iostream>
using namespace std;
int main()
{
    int arr[15] = {1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    int numzero = 0;
    int numone = 1;
    for (int i = 0; i < 15; i++)
    {
        if (arr[i] == 0)
        {
            numzero++;
        }
        if (arr[i] == 1)
        {
            numone++;
        }
    }
    cout << "Number of zeros in the array: " << numzero << endl;
    cout << "Number of ones in the array :" << numone;
    return 0;
}
