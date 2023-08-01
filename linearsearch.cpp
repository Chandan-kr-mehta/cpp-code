#include <iostream>
using namespace std;
int main()
{
    int arr[] = {23, 32, 43, 34, 76, 89}, key;
    cout << "Enter number tom be searched";
    cin >> key;
    int flag = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        cout << "found" << endl;
    }
    // cout<<"not found";
    else
        cout << "not found";

    return 0;
}
