#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
using namespace std;

/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */

int sockMerchant(int n, vector<int> ar)
{
    map<int, int> temp;
    vector<int> res;
    map<int, int>::iterator itr;
    int result;
    for (auto i : ar)
    {
        if (temp.find(i) == temp.end())
        {
            temp.insert(pair<int, int>(i, 1));
        }
        else
        {
            temp[i]++;
        }
    }
    map<int, int> temp_copy(temp);

    for (itr = temp.begin(); itr != temp.end(); ++itr)
    {
        if (itr->second <= 1)
        {
            temp_copy.erase(itr->first);
        }
        if (itr->second % 2 != 0 && itr->second > 2)
        {
            temp_copy[itr->first]--;
        }
    }

    result = accumulate(temp_copy.begin(), temp_copy.end(), 0,
                        [](auto prev_sum, auto &entry)
                        {
                            return prev_sum + entry.second;
                        });
    cout << result;

    return result / 2;
}
