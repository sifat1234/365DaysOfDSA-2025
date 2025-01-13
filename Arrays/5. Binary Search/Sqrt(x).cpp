class Solution {
public:
    int mySqrt(int x) {
        int start=1;
        int end=x;
        int mid;
        int ans=0;
        
        while(start<=end){
            mid=start+(end-start)/2;
            if(mid==x/mid){
               ans= mid;
                break;
            }

            else if(mid<x/mid){
                ans=mid;
               start=mid+1;
            }
            else{
        
                end=mid-1;
            }
        }
        return ans;
    }
};