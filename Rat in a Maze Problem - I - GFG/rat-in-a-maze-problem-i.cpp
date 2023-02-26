//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void func(int i,int j,int n,vector<vector<int>>&mat,string str,
                vector<string>&ans,vector<vector<int>>&visited)
    {
        if(i==n-1 and j==n-1){
            ans.push_back(str);
            return;
        }
        string dir="DLRU";
        int dx[4]={1,0,0,-1};
        int dy[4]={0,-1,1,0};
        for(int k=0;k<4;k++){
            int newi=i+dx[k];
            int newj=j+dy[k];
            if(newi>=0 and newj>=0 and newi<n and newj<n and !visited[newi][newj] and mat[newi][newj]==1){
               
                    visited[i][j]=1;
                    func(newi,newj,n,mat,str+dir[k],ans,visited);
                    visited[i][j]=0;
                
            }
        }
        
    }
    vector<string> findPath(vector<vector<int>> &mat, int n) {
       vector<string>ans;
       vector<vector<int>>visited(n,vector<int>(n,0));
        if(mat[0][0]==0) return ans;
       func(0,0,n,mat,"",ans,visited);
       return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends