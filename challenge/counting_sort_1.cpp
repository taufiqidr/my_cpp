#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

/*
 * Complete the 'countingSort' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

vector<int> countingSort(vector<int> arr)
{
    vector<int> result;
    for (int i = 0; i < 100; i++)
    {
        result.push_back(0);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        result[arr[i]]++;
    }

    return result;
}

int main()
{
    return 0;
}
