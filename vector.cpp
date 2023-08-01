#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(4);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}