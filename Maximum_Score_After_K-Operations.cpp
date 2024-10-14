#include <queue>
#include <vector>
#include <cmath>

class Solution
{
public:
    long long maxKelements(std::vector<int> &nums, int k)
    {
        // Use a max heap (priority queue)
        std::priority_queue<int> maxHeap(nums.begin(), nums.end());
        long long score = 0;

        // Perform k operations
        while (k--)
        {
            // Get the maximum element
            int maxElement = maxHeap.top();
            maxHeap.pop();

            // Add it to the score
            score += maxElement;

            // Replace the element with ceil(maxElement / 3)
            maxHeap.push(std::ceil(maxElement / 3.0));
        }

        return score;
    }
};
