#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'matchingStrings' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY strings
 *  2. STRING_ARRAY queries
 */

vector<int> matchingStrings(vector<string> strings, vector<string> queries)
{

    vector<int> result;
    // sort(strings.begin(),strings.end());
    for (int i = 0; i < queries.size(); i++)
    {
        int temp = 0;
        for (int j = 0; j < strings.size(); j++)
        {
            if (queries[i] == strings[j])
            {
                temp++;
            }
        }
        result.push_back(temp);
    }
    return result;
}

int main()
{

    return 0;
}
