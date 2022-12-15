//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    bool func(int N, int arr[],int sum,vector<vector<int>>&dp)
    {
        if(sum==0) return true;
       if(N==0) return false;
       
       if(dp[N-1][sum]!=-1) return dp[N-1][sum];
       
       if(arr[N-1]>sum)
       return dp[N-1][sum]=func(N-1,arr,sum,dp);
       else
       return dp[N-1][sum]=(func(N-1,arr,sum,dp) or func(N-1,arr,sum-arr[N-1],dp));
    }
    int equalPartition(int N, int arr[])
    {
        int sum = 0;
        for(int i=0;i<N;i++)
        sum+=arr[i];
        vector<vector<int>>dp(N+1,vector<int>(sum+1,-1));
        
        if(sum%2==0 and (func(N,arr,sum/2,dp)==true) )
        return 1;
        else
        return 0;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends