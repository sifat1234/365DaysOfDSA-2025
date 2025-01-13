// User function Template for C++

class Solution {
public:

    bool canPlaceCows(int k, vector<int>& stalls, int minDist) {
        int cowsPlaced = 1; // place the first cow in the first stall
        int lastPos = stalls[0]; // last position where the cow was placed

        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - lastPos >= minDist) {
                cowsPlaced++; // place another cow
                lastPos = stalls[i]; // update the last position

                if (cowsPlaced == k) {
                    return true; // all cows placed successfully
                }
            }
        }
        return false; // not possible to place all cows
    }

    int solve(int n, int k, vector<int> &stalls) {
        // Step 1: Sort the stalls to arrange them in order
        sort(stalls.begin(), stalls.end());

        // Step 2: Binary search on the answer (minimum distance)
        int low = 1; // minimum possible distance
        int high = stalls[n - 1] - stalls[0]; // maximum possible distance
        int result = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Step 3: Check if it is possible to place cows with at least 'mid' distance
            if (canPlaceCows(k, stalls, mid)) {
                result = mid; // mid is a possible solution
                low = mid + 1; // try for a larger distance
            } else {
                high = mid - 1; // reduce the distance
            }
        }

        return result; // largest possible minimum distance
    }
};