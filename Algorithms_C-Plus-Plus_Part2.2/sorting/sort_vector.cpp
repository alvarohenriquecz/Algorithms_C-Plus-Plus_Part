//
// A C++ program to demonstrate working of sort(), reverse()
//
// The All ▲lgorithms Project
//
// https://allalgorithms.com/sorting
// https://github.com/allalgorithms/cpp
//
// Contributed by: Saket Kumar
// Github: @saket1999
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric> // For accumulate operation
using namespace std;

int main()
{
    // Initialize vector with array values
    int arr[] = {10, 20, 5, 23, 42, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);

    cout << "Vecotr is: ";
    for (int i = 0; i < n; i++)
        cout << vect[i] << " ";
    
    // Sorting the be Vecotr in Ascending order
    sort(vect.begin(), vect.end());

    cout << "\nVector after sorting is: ";
    for (int i = 0; i < n; i++)
        cout << vect[i] << " ";
    
    // Reversing the Vector
    reverse(vect.begin(), vect.end());

    cout << "\nVector after reversing is: ";
    for (int i = 0; i < 6; i++)
        cout << vect[i] << " ";
    
    cout << "\nMaximum element of vecotr is: ";
    cout << *max_element(vect.begin(), vect.end());

    cout << "\nMinimum element of vecotr is: ";
    cout << *min_element(vect.begin(), vect.end());

    // Starting the summation from 0
    cout << "\nThe summation of vector elements is: ";
    cout << accumulate(vect.begin(), vect.end(), 0);

    return 0;
}