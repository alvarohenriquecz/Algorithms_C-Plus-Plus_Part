#include <iostream>
#include <climits>
using namespace std;

// Function to find the minimum number of coins required to get Sum S
int findMinCoins(int arr[], int n, int N)
{
    // dp[i] = no of coins required to get a total of i
    int dp[N + 1];

    //0 coins are needed for 0 sum

    dp[0] = 0;

    for (int i = 1; i <= N; i++)
    {
        // initialize minimum number of coins needed of infinity
        dp[i] = INT_MAX;
        int res = INT_MAX;

        // do for each coin
        for (int c = 0; c < n; c++)
        {
            if (i - arr[c] >= 0) //check if coins doesn't become negative by including it
                res = dp[i - arr[c]];
            
            // if total can be reached by including current coin c.
            // update minimum number of coins need dp[i]
            if (res != INT_MAX)
				dp[i] = min(dp[i], res + 1);                
        }
    }

    // The minimum No of coins requiered for N = dp[N]
    return dp[N];
}

int main()
{
    // No of coins we have
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    //Total change Required
    int N = 15;

    cout << "minimum Number of coins required " << findMinCoins(arr, n, N) << "\n";

    return 0;
}