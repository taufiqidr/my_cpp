#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    set<int> arr;
    for (int i = 0; i < n; i++)
    {
        int command, elem;
        cin >> command >> elem;
        switch (command)
        {
        case 1:
            arr.insert(elem);
            break;
        case 2:
            arr.erase(elem);
            break;
        case 3:
            cout << (arr.find(elem) == arr.end() ? "No" : "Yes") << endl;
            break;
        }
    }
    return 0;
}
