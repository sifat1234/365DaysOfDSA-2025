// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int n=arr.size();
        int start=0;
        int end=n-1;
        int mid;
     
        
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==1){
               
                start=mid+1;
            }
        else{
            end=mid-1;
        }
           
            
        }
        return n-start;
    }
};