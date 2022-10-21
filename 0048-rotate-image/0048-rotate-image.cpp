#define f first
#define s second

class Solution {
public:
    void rotate(vector<vector<int>>& arr) 
    {
        int n = arr.size();
        pair<int,int>a,b,c,d;
        int l = 0 ,  k = n-1;
        a = {0,0};
        b = {0,n-1};
        c = {n-1,n-1};
        d = {n-1,0};
        
        int z = 0;
        int y = n-1;
        
        while(true)
        {
            
            if((z>=n/2 and n%2==0) or (z>=n/2+1 and n%2==1) )
                break;;
            
            z++;
            
            for(int i = 0 ; i< y ; i++)
               {
                    int tmp = arr[d.f][d.s];
                    arr[d.f][d.s] = arr[c.f][c.s];
                    arr[c.f][c.s] = arr[b.f][b.s];
                    arr[b.f][b.s] = arr[a.f][a.s];
                    arr[a.f][a.s] = tmp;
                    a.s++; b.f++;c.s--;d.f--;
               }
            a = {0+z,0+z};
            b = {0+z,n-1-z};
            c = {n-1-z,n-1-z};
            d = {n-1-z,0+z};
            y = y-2;
            
        }
        
    
    }
};