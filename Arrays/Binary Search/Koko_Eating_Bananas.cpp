class Solution {
public:
    // Helper function to check if it's possible to eat all bananas with speed `k` in `h` hours
    bool possible(const vector<int>& piles, int h, int k) {
         long long hours = 0;
        for (int i = 0; i < piles.size(); ++i) {
            // Calculate how many hours are needed for the current pile
            if (piles[i] % k == 0) {
                hours += piles[i] / k;  // If divisible, add the exact number of hours
            } else {
                hours += piles[i] / k + 1;  // If not divisible, add one more hour
            }
        }
        return hours <= h;  // Return true if Koko can finish within h hours
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int min = 1;
        int max = *max_element(piles.begin(), piles.end());
        int ans = max;  // Start by assuming the max speed

        // Perform binary search to find the minimum speed
        while (min <= max) {
            int mid = min + (max - min) / 2;

            // Check if Koko can finish all bananas with speed `mid`
            if (possible(piles, h, mid)) {
                ans = mid;  // If yes, record the answer and try smaller speeds
                max = mid - 1;
            } else {
                min = mid + 1;  // Otherwise, increase the speed
            }
        }
        return ans;
    }
};