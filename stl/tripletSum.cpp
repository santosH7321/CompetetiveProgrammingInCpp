#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Create
    vector<int> arr{10, 20, 30, 40, 50};
    int sum = 80;

    for (int i = 0; i < arr.size(); i++)
    {
        int element1 = arr[i];

        for (int j = 0; j < arr.size(); j++)
        {
            int element2 = arr[j];

            for (int k = 0; k < arr.size(); k++)
            {
                int element3 = arr[k];

                if (element1 + element2 + element3 == sum)
                {
                    cout << element1 << " , " << element2 << " , " << element3 << endl;
                }
            }
        }
    }
}

//Output
// 10 , 20 , 50
// 10 , 30 , 40
// 10 , 40 , 30
// 10 , 50 , 20
// 20 , 10 , 50
// 20 , 20 , 40
// 20 , 30 , 30
// 20 , 40 , 20
// 20 , 50 , 10
// 30 , 10 , 40
// 30 , 20 , 30
// 30 , 30 , 20
// 30 , 40 , 10
// 40 , 10 , 30
// 40 , 20 , 20
// 40 , 30 , 10
// 50 , 10 , 20
// 50 , 20 , 10