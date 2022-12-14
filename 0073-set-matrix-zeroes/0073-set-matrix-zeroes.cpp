class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) 
    {
        bool col = false, row=false;
        int m=arr.size();
        int n=arr[0].size();
        
         for(int i=0;i<m;i++)
             if(arr[i][0]==0)
             {
                 col=true;
                 break;
             }
           for(int i=0;i<n;i++)
             if(arr[0][i]==0)
             {
                 row=true;
                 break;
             }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(arr[i][j]==0)
                {
                    arr[0][j]=0;
                    arr[i][0]=0;
                }
            }
        }
        
         for(int i=m-1;i>=1;i--)
        {
            for(int j=n-1;j>=1;j--)
            {
                if(arr[0][j]==0 or arr[i][0]==0)
                    arr[i][j]=0;
            }
        }
        
        if(col)
            for(int i=0;i<m;i++)
                arr[i][0]=0;
        
         if(row)
            for(int i=0;i<n;i++)
                arr[0][i]=0;
    }
};