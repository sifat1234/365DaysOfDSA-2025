int solve(int* A, int n1, int B) {
    
    sort(A.begin(), A.end());
    int start= 0;
    int end= 1;

    if(B<0){
      B= B*-1;
    }
    
    while(end<n1){
        if(A[end]-A[start]==B){
            return 1;
        }
        
        else if(A[end]-A[start]<B){
            end++;
        }

        else if(start==end){
            end++;
        }
        else{
            start++;
        }
    }
    return 0;
}
