class Solution {
public:
    void nextPermutation(vector<int>& arr) 
    {
        int flag=-1;
        int n=arr.size();
        
        for(int i=n-1;i>0;i--)
            if(arr[i]>arr[i-1])
            {
                flag=i-1;
                break;
            }
        
        if(flag<0)
        {
            reverse(arr.begin(),arr.end());     
            return;
        }
        
        int z;
        
         for(int i=n-1;i>flag;i--)
            if(arr[i]>arr[flag])
            {
                z=i;
                break;
            }
        
        swap(arr[z],arr[flag]);
        
        reverse(arr.begin()+flag+1,arr.end());       
     
    }
};