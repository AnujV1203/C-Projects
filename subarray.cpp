#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> findLongestConsecutiveSubarray(std::vector<int>& nums) {
    std::unordered_set<int> numSet(nums.begin(), nums.end());
    int longestLength = 0;
    std::vector<int> longestSubarray;
    
    for (int num : numSet) {
        if (!numSet.count(num - 1)) {
            int currentNum = num;
            int currentLength = 1;
            
            while (numSet.count(currentNum + 1)) {
                currentNum++;
                currentLength++;
            }
            
            if (currentLength > longestLength) {
                longestLength = currentLength;
                longestSubarray.clear();
                for (int i = num; i <= currentNum; i++) {
                    longestSubarray.push_back(i);
                }
            }
        }
    }
    
    return longestSubarray;
}

int main() {
    std::vector<int> nums = {1, 2, 4, 5, 6, 7, 8, 10};
    
    std::vector<int> longestSubarray = findLongestConsecutiveSubarray(nums);
    
    std::cout << "Longest Consecutive Subarray: ";
    for (int num : longestSubarray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
