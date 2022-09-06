#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

/*
 * Complete the 'twoArrays' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY A
 *  3. INTEGER_ARRAY B
 */

string twoArrays(int k, vector<int> A, vector<int> B)
{
    // int min_A = *min_element(A.begin(),A.end());
    // int min_B = *min_element(B.begin(),B.end());
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] + B[i] < k)
        {
            return "NO";
        }
        else
        {
            continue;
        }
    }
    return "YES";
}

int main()
{
    return 0;
}