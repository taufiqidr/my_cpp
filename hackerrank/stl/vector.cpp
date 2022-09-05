#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> ivec;
    int value;
    int size;
    cin >> size;
    for (int j = 0; j < size; ++j)
    {
        cin >> value;
        ivec.push_back(value);
    }
    sort(ivec.begin(), ivec.end());
    for (int i = 0; i < ivec.size(); i++)
    {
        cout << ivec[i] << " ";
    }

    return 0;
}
