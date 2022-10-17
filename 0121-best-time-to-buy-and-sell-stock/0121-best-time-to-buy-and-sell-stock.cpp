class Solution {
public:
    int maxProfit(vector<int>& arr) 
    {
        int n=arr.size();
        int minn=arr[0], profit=0;
        
        for(int i=1;i<n;i++)
        {
            int temp=arr[i]-minn;
            if(temp>profit)
                profit=temp;
            if(arr[i]<minn)
                minn=arr[i];
        }
        
        return profit;
    }
};