//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
    void func(int idx,int n,vector<int>&ans,int sum,vector<int>&arr)
    {
        if(idx==n)
        {
            ans.push_back(sum);
            return;
        }
        sum+=arr[idx];
        func(idx+1,n,ans,sum,arr);
        sum-=arr[idx];
        func(idx+1,n,ans,sum,arr);
    }
    
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        func(0,N,ans,0,arr);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends