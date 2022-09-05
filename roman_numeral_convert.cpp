#include <iostream>
// #include <string>
bool isSpecial(int num)
{
    if (num < 1000 && num >= 900)
    {
        return true;
    }
    else if (num < 500 && num >= 400)
    {
        return true;
    }
    else if (num < 100 && num >= 90)
    {
        return true;
    }
    else if (num < 50 && num >= 40)
    {
        return true;
    }
    else if (num == 9)
    {
        return true;
    }
    else if (num == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}

std::string convert(int num)
{
    std::string result = "";
    //
    std::string arab[] = {"M", "D", "C", "L", "X", "V"};
    std::string arab_s[] = {"CM", "CD", "XC", "XL", "IX", "IV"};
    int num_arab[] = {1000, 500, 100, 50, 10, 5};
    int num_arab_s[] = {900, 400, 90, 40, 9, 4};
    //
    int idx = 0, idx_s = 0;
    //
    while (num > 0)
    {
        if (num < 4)
        {
            result += 'I';
            num -= 1;
        }
        else
        {
            if (isSpecial(num))
            {
                while (num - num_arab_s[idx_s] < 0)
                {
                    idx_s++;
                }
                result += arab_s[idx_s];
                num -= num_arab_s[idx_s];
            }
            else
            {
                // std::cout << num - num_arab[idx] << std::endl;
                while (num - num_arab[idx] < 0)
                {
                    idx++;
                }
                result += arab[idx];
                num -= num_arab[idx];
            }
        }
    }

    return result;
}
int main()
{
    // int num;
    // std::cin >> num;
    //
    // std::string name;
    // getline(std::cin, name);

    for (int i = 1; i <= 1000; i++)
    {
        std::cout << convert(i) << std::endl;
    }

    return 0;
}