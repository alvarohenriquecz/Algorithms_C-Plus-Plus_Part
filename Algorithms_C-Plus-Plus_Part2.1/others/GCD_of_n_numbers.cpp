//This program aims at calculating the GCD of numbers by division method
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n: " << endl;
    cin >> n;
    int a[n];
    int i, j, gcd;
    cout << "Enter the n numbers: " << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
    j = 1; //to acess all elements of the array starting from 1
    gcd = a[0];
    while (j < n)
    {
        if (a[j] % gcd == 0) //Value of gcd is as needed so far
        j++;                    // so we check for next element
        else 
            gcd = a[j] % gcd; // calculating GCD by division method
    }
    cout << "GCD of entered n numbers:" << gcd;
    return 0;
}