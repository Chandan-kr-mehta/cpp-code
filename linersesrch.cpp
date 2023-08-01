#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {3, 4, 5, 6, 8}, key, size, flag = 0;
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            int flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found";
    }
    return 0;
}
