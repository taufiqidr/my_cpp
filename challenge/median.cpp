#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

/*
 * Complete the 'findMedian' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int findMedian(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int pos, pos1, pos2, median;
    if (arr.size() % 2 == 0)
    {
        pos1 = int(arr.size()) / 2;
        pos2 = int(arr.size()) / 2 + 1;
        median = (arr[pos1] + arr[pos2]) / 2;
    }
    else
    {
        pos = int(ceil((int(arr.size()) / 2)));
        median = arr[pos];
    }
    return median;
}