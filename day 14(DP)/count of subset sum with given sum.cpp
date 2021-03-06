#include <bits/stdc++.h> 
using namespace std; 
int knapSack(int B, int arr[],int n) 
{ 
    int i, b; 
    int dp[n + 1][B + 1]; 
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=1;
    }
    for (int b = 1; b <= B; b++) 
    {
        dp[0][b] = 0; 
    }    
    // Build table K[][] in bottom up manner 
    for (i = 1; i <= n; i++) 
    { 
        for (b = 1; b <= B; b++) 
        { 
            if (arr[i - 1] <= b) 
                dp[i][b] =dp[i - 1][b - arr[i - 1]] + dp[i - 1][b]; 
            else
                dp[i][b] = dp[i - 1][b]; 
        } 
    } 

    return dp[n][B]; 
} 



int main() 
{ 
	int arr[] = { 1, 2, 3, 3 }; 
	int n = sizeof(arr) / sizeof(int); 
	int x = 6; 

	cout << knapSack(x,arr, n); 

	return 0; 
} 

