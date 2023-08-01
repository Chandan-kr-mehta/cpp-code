#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{40, 30, 8, 2};
    int sum = 80;
    for (int i = 0; i < arr.size(); i++)
    {
        int element1 = arr[i];
        for (int j = 0; j < i + 1; j++)
        {
            int element2 = arr[j];
            for (int k = 0; k < i + 2; k++)
            {
                int element3 = arr[k];
                for (int l = 0; l < k + 1; l++)
                {
                    int element4 = arr[l];

                    if (element1 + element2 + element3 == sum)
                    {
                        cout << "sum" << element1 << element2 << element3 << element4;
                    }
                }
            }
        }
    }
    return 0;
}