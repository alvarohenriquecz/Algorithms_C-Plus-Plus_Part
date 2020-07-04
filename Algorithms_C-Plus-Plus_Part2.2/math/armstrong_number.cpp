#include <iostream>
#include <string>
using namespace std;

string check_armstrong(long long number)
{
    long long sum_of_digits = 0;
    long long value = number;
    while(number)
    {
        int unit = number % 10;
        sum_of_digits += (unit*unit*unit);
        number = number / 10;
    }
    return value == sum_of_digits? "\t It is Armstrong Number":"\t Not A  Armstrong Number";
}

int main()
{
    cout << check_armstrong(153) << endl; // It is armstrong number.
    cout << check_armstrong(102) << endl;
}