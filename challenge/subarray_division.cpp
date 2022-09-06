#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

/*
 * Complete the 'birthday' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY s
 *  2. INTEGER d
 *  3. INTEGER m
 */

int birthday(vector<int> s, int d, int m)
{
    int num = 0;
    if (s.size() == 1)
    {
        if (s[0] == d)
        {
            num = 1;
        }
        else
        {
            num = 0;
        }
    }
    else
    {
        for (int i = 0; i < int(s.size()) - m + 1; i++)
        {
            if (accumulate(s.begin() + i, s.begin() + i + m, 0) == d)
            {
                num++;
            }
        }
    }
}

int main()
{
    return 0;
}
