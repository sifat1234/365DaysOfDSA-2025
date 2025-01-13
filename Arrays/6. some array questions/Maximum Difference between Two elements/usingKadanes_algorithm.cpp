#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {9, 5, 8, 12, 2, 2, 3, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
  
        int diff ;
        int prefix = 0;
        int maxi = INT32_MIN;
        for(int i = 0; i < n-1; i++)
        {
            diff = arr[i+1] - arr[i];

            prefix += diff;

            maxi = max(maxi,prefix);

            if(prefix < 0)
                prefix = 0;

        }
    

    cout << "Maximum Different between 2 elements: " << maxi;

    return 0;
}