#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/*
 * Complete the 'lonelyinteger' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int lonelyinteger(vector<int> a)
{

    sort(a.begin(), a.end());
    int temp = a[0];
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;
    for (int i = 0; i < a.size(); i++)
    {

        if (temp != a[i] && a[i] != a[i - 1] && a[i] != a[i + 1])
        {
            temp = a[i];
            break;
        }
    }

    return temp;
}

int main()
{

    return 0;
}
