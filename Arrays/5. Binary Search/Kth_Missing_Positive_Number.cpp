class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n= arr.size();
        int s=0;
        int e=n-1;
        int mid;
        int missingNumber;

        while(s<=e){
            mid= s + (e-s)/2;
            missingNumber= arr[mid]-(mid+1);

            if(missingNumber< k){
                s= mid +1;
            } else{
                e=mid-1;
            }


        }
        return s+k;
    }
};