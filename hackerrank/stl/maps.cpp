#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> arr;
    for (int i = 0; i < n; i++)
    {
        string key;
        int command, elem;
        cin >> command;
        switch (command)
        {
        case 1:
            cin >> key >> elem;
            if (arr.find(key) == arr.end())
            {
                arr.insert(make_pair(key, elem));
            }
            else
            {
                arr[key] += elem;
            }

            break;
        case 2:
            cin >> key;
            arr.erase(key);
            break;
        case 3:
            cin >> key;
            cout << (arr.find(key) == arr.end() ? 0 : arr[key]) << endl;
            break;
        }
    }

    return 0;
}
