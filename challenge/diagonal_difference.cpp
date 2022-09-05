#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr)
{
    int sum1, sum2, result;
    vector<int> diag1, diag2;

    for (int i = 0; i < arr.size(); i++)
    {
        diag1.push_back(arr[i][i]);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        diag2.push_back(arr[i][arr.size() - i - 1]);
    }

    sum1 = accumulate(diag1.begin(), diag1.end(), 0);
    sum2 = accumulate(diag2.begin(), diag2.end(), 0);

    result = abs(sum1 - sum2);

    return result;
}

int main()
{
    return 0;
}
