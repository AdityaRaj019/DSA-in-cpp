#include <iostream>
#include <vector>
#include <algorithm> // Required for std::swap and std::reverse

// It's generally better to use `std::` prefix than `using namespace std;`
// See https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice

void nextPermutation(std::vector<int>& nums) {
    int n = nums.size();
    if (n <= 1) {
        // A vector with 0 or 1 elements has only one permutation.
        return;
    }

    // Step 1: Find the pivot.
    // The pivot is the rightmost element that is smaller than the element to its right.
    // We search from right to left.
    int pivot = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            pivot = i;
            break; // Found the pivot, no need to search further.
        }
    }

    // Step 2: Handle the case where the array is the last permutation.
    // If no pivot is found, the array is sorted in descending order (e.g., [3, 2, 1]).
    // The next permutation is the smallest one, which is the array sorted in ascending order.
    if (pivot == -1) {
        std::reverse(nums.begin(), nums.end());
        return;
    }

    // Step 3: Find the successor to the pivot.
    // Search from right to left for the smallest element that is larger than the pivot.
    for (int i = n - 1; i > pivot; i--) {
        if (nums[i] > nums[pivot]) {
            // Step 4: Swap the pivot with its successor.
            std::swap(nums[pivot], nums[i]);
            break; // The swap is done, no need to search further.
        }
    }

    // Step 5: Reverse the suffix.
    // Reverse the part of the array to the right of the pivot. This ensures the new
    // permutation is the very next one in lexicographical order.
    std::reverse(nums.begin() + pivot + 1, nums.end());
}

int main() {
    // Test case 1: A standard case
    std::vector<int> nums1 = {2, 3, 6, 5, 4, 1};
    std::cout << "Original: 2 3 6 5 4 1" << std::endl;
    nextPermutation(nums1);
    std::cout << "Next Permutation: ";
    for (int i : nums1) {
        std::cout << i << " ";
    }
    std::cout << "\n" << std::endl; // Expected: 2 4 1 3 5 6

    // Test case 2: The last permutation
    std::vector<int> nums2 = {3, 2, 1};
    std::cout << "Original: 3 2 1" << std::endl;
    nextPermutation(nums2);
    std::cout << "Next Permutation: ";
    for (int i : nums2) {
        std::cout << i << " ";
    }
    std::cout << std::endl; // Expected: 1 2 3

    return 0;
}