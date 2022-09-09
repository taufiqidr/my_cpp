#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
using namespace std;

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p)
{
    vector<vector<int>> book = {{1}};
    vector<vector<int>> book2 = {{1}};

    int result, front_turn = 0, back_turn = 0;

    if (p == 1)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        book.push_back({i, i + 1});
    }

    for (int i = 0; i < book.size(); i++)
    {
        if (i > 0)
        {
            if (i % 2 != 0)
            {
                book2.push_back(book[i]);
            }
        }
    }

    if (n % 2 == 0)
    {
        book2.push_back({n});
    }

    for (int i = 0; i < book2.size(); i++)
    {
        int exists = 0;
        for (int j = 0; j < book2[i].size(); j++)
        {
            if (p == book2[i][j])
            {
                exists++;
                break;
            }
        }
        if (exists > 0)
        {
            front_turn = i;
            break;
        }
    }
    for (int i = book2.size() - 1; i > 0; i--)
    {
        int exists = 0;
        for (int j = 0; j < book2[i].size(); j++)
        {
            if (p == book2[i][j])
            {
                exists++;
                break;
            }
        }
        if (exists > 0)
        {
            break;
        }
        back_turn++;
    }

    if (back_turn < front_turn)
    {
        result = back_turn;
    }
    else
    {
        result = front_turn;
    }
    return result;
}