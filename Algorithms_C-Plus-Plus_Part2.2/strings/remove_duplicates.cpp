//
// CPP program to remove duplicate character
// from character array and print in sorted
// order
//
// The All ▲lgorithms Project
//
// https://allalgorithms.com/strings
// https://github.com/allalgorithms/cpp
//
// Contributed by: Tushar Kanakagiri
// Github: @tusharkanakagiri
//
#include <iostream>
using namespace std;

char *removeDuplicates(char str[], int n)
{
    // Used as index in the modified string
    int index = 0;

    // Traverse through all characters
    for (int i = 0; i < n; i++)
    {
        // Check if str[i] is present  before it
        int j;
        for (j = 0; j < i; j++)
            if (str[i] == str[j])
                break;
        
        // If not present, then add it to
        // result
        if ( j == i)
            str[index++] = str[i];
    }

    return str;
}

// Driver code
int main()
{
    char str[] = ""; // Enter string here
    int n = sizeof(str) / sizeof(str[0]);
    cout << removeDuplicates(str, n);
    return 0;
}