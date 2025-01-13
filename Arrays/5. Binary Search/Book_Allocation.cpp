class Solution {
  public:
  
  
  bool isPossible(vector<int>& arr, int n, int k, int mid){
      int studentCount=1;
      int pageNumbers=0;
      
      for (int i=0; i<n; i++){
          if(arr[i]>mid){
              return false;
          }
          
          if(arr[i]+pageNumbers > mid){
              studentCount++;
              pageNumbers= arr[i];
              if(studentCount>k){
                  return false;
              }
          } else{
              pageNumbers+=arr[i];
          }
      }
      
      return true;
  }
  
  
    int findPages(vector<int> &arr, int k) {
        // code here
         int start=0;
         int end = accumulate(arr.begin(), arr.end(), 0);
         int n= arr.size();
         int ans=-1;
         
          int mid;
         if(n<k){
             return -1;
         }
         
        
         
         while(start<=end){
             mid= start + (end- start)/2;
             if(isPossible(arr, n, k, mid)){
                 ans=mid;
                 end= mid -1;
             } else{
                 start=mid+1;
             }
             
         }
         
         return ans;
    }
};