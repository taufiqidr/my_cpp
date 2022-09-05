#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        arr.push_back(elem);
    }
    int idx, beginning, ending;
    cin >> idx;
    arr.erase(arr.begin() + idx - 1);
    cin >> beginning >> ending;
    arr.erase(arr.begin() + beginning - 1, arr.begin() + ending - 1);
    cout << arr.size() << endl;
    for (auto i = arr.begin(); i != arr.end(); ++i)
        cout << *i << " ";
    return 0;
}
