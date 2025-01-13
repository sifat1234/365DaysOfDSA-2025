class Solution {
public:

    bool isPossible(const vector<int>&weight, int n, int days, int mid){
        int count=1;
        int daysNums=0;
        
     for(int i=0; i<n; i++){
         
         if(weight[i]>mid){
             return false;
             
         }
         if(daysNums+weight[i]<=mid){
            daysNums+=weight[i];
         }
         
         else{
             count++;
             if(count>days){
                 return false;
             }
             daysNums=weight[i];
         }
     }
        
      return true;
        
    }


    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int sum = accumulate(weights.begin(), weights.end(), 0);

        int start = 0;
        int end = sum;
        long long ans = -1;

        if (n < days) {
            return -1;
        }
        
        while(start<=end){
          int mid= start+ (end-start)/2;
            
            if(isPossible(weights, n, days ,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
   
};