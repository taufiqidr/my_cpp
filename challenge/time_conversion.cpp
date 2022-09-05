// C++ program to convert 12 hour to 24 hour
// format
#include <iostream>
#include <string>
using namespace std;

string print24(string str)
{
    string result = "";
    // Get hours
    int h1 = (int)str[1] - '0';
    int h2 = (int)str[0] - '0';
    int hh = (h2 * 10 + h1 % 10);

    // If time is in "AM"
    if (str[8] == 'A')
    {
        if (hh == 12)
        {
            result += "00";
            for (int i = 2; i <= 7; i++)
                result += str[i];
            return result;
        }
        else
        {
            for (int i = 0; i <= 7; i++)
                result += str[i];
            return result;
        }
    }

    // If time is in "PM"
    else
    {
        if (hh == 12)
        {
            result += "12";
            for (int i = 2; i <= 7; i++)
                result += str[i];
            return result;
        }
        else
        {
            hh = hh + 12;
            result += to_string(hh);
            for (int i = 2; i <= 7; i++)
                result += str[i];
            return result;
        }
    }
}

// Driver code
int main()
{
    string str = "07:05:45PM";
    string result = print24(str);
    cout << result;
    return 0;
}
