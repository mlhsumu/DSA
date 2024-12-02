#include<bits/stdc++.h>
using namespace std;

// Function to check if there is a subset with a given sum
bool issubsetsum(int arr[], int n, int sum)
{
    // Create a 2D boolean array to store results of subproblems
    bool subset[n+1][sum+1];
     // Initialize the first column: a sum of 0 is always possible (using the empty subset)
    for(int i=0; i<=n; i++)
        subset[i][0]=true;
      // Initialize the first row: if there are no elements, no positive sum can be formed
    for(int i=1; i<=sum; i++)
        subset[0][i]=false;
    // Fill the subset table using dynamic programming
    for(int i=1; i<=sum; i++)
    {// Loop through each element
        for(int j=1;j<=sum;j++)
        { // Loop through each possible sum
            // If the current element is greater than the current sum
            if(j<arr[i-1])
                subset[i][j]=subset[i-1][j];// Can't include the element+

            if(j>arr[i-1])
                subset[i][j]=subset[i-1][j] || subset[i-1][j-arr[i-1]];
        }
    }
   return subset[n][sum];
}
main()
{
    int set[]={3,34,4,12,5,2};
    int sum=9;
    int n=sizeof(set)/sizeof(set[0]);
    if(issubsetsum(set, n, sum)==true)
        cout<<"found";
    else
        cout<<"notfound";
    return 0;
}
