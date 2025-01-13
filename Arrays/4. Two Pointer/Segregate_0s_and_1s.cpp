// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        
    int start=0;
    int end=arr.size()-1;

    while(start<end){
        if(arr[start]==0){
            start++;
        }

        if(arr[end]==1){
            end--;
        }
        else{
          
            swap(arr[start], arr[end]);
            start++;
            end--;
          
        }
    }

    }
};