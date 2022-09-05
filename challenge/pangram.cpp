#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <regex>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s)
{
    int total;
    vector<int> alphabet(26, 0);
    for (auto x : s)
    {
        try
        {
            alphabet[int(tolower(x)) - 97] = 1;
        }
        catch (...)
        {
            continue;
        }
    }
    total = accumulate(alphabet.begin(), alphabet.end(), 0);

    if (total >= 26)
    {
        return "pangram";
    }
    else
    {
        return "not pangram";
    }
}

int main()
{
    return 0;
}
