//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	     
        int start=0;
        int end=n-1;
        int mid;
        int first=-1;
        int last=-1;
        int output=0;
        
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]<x){
                start=mid+1;
            }
            if(arr[mid]==x){
                first=mid;
                end=mid-1;
            }

            if(arr[mid]>x){
                end=mid-1;
            }
        }
        
        if(first == -1) {
            return 0;
        }

      start=0;
         end=n-1;
        mid;

         while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]<x){
                start=mid+1;
            }
            if(arr[mid]==x){
                last=mid;
                start=mid+1;
            }

            if(arr[mid]>x){
                end=mid-1;
            }
        }
        
               return last - first + 1;

	}
};