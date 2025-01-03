
class Solution {
  public:
    // Function returns the second
    // largest elements
  int getSecondLargest(vector<int> &arr) {
    int n = arr.size();
    int largest = -1;
    int secondLargest = -1;

    // Check if the array has fewer than 2 elements
    if (n < 2) {
        return -1;
    }

    // Find the largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Find the second largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] != largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    
    return secondLargest;
}

};