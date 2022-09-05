#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/*
 * Complete the 'flippingBits' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER n as parameter.
 */

long flippingBits(long n)
{
    long res;
    res = (long)4294967295 - n;
    return res;
}

int main()
{
    auto x = flippingBits(2147483647);
    cout << x;
    return 0;
}
