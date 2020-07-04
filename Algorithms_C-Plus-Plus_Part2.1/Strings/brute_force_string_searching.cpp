#include <iostream>
#include <string>
#include <vector>

using std::string;

int brute_force(string text, string pattern);
std::vector<std::vector<string>> test_set  =   {
    // {text, pattern, expected output}
     {"a", "aa", "-1"},
     {"a", "a", "0"},
     {"ba", "b", "0"},
     {"bba", "bb", "0"},
     {"bbca", "c", "2"},
     {"ab", "b", "1"}
};

int main()
{
    for (size_t i = 0; i < test_set.size(); i++)
    {
        int output = brute_force(test_set[i][0], test_set[i][1]);
        if (std::to_string(output) == test_set[i][2])
            std::cout << "Success\n";
        else
            std::cout << "Failure\n";
    }
    return 0;
}

int brute_force(string text, string patter)
{
    size_t pat_l = patter.length();
    size_t txt_l = text.length();
    int index = -1;
    if (pat_l <= txt_l)
    {
        for (size_t i = 0; i < txt_l-pat_l+1; i++)
        {
            string s = text.substr(i, pat_l);
            if (s == patter)
            {
                index = i;
                break;
            }
        }
    }
    return index;
}
