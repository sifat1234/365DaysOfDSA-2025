#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    int start = 0;
    int end = n - 1;
    int mid;
    int first = -1;
    int second = -1;

    // Find the first occurrence
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (nums[mid] < target) {
            start = mid + 1;
        } else if (nums[mid] == target) {
            first = mid;
            end = mid - 1;
        } else {
            end = mid - 1;
        }
    }

    // Reset start and end for second occurrence
    start = 0;
    end = n - 1;

    // Find the last occurrence
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (nums[mid] < target) {
            start = mid + 1;
        } else if (nums[mid] == target) {
            second = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return {first, second};
}

int main() {
    // Input the array size and elements
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Input the target value
    cout << "Enter the target value: ";
    int target;
    cin >> target;

    // Call the function and get the result
    vector<int> result = searchRange(nums, target);

    // Output the result
    cout << "First position: " << result[0] << "\n";
    cout << "Last position: " << result[1] << "\n";

    return 0;
}
