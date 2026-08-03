# [Sum of Subarrays](https://www.geeksforgeeks.org/problems/sum-of-subarrays2229/1)
## Medium
Given an array arr[], find the sum of all the subarrays of the given array.
Note: It is guaranteed that the total sum will fit within a 32-bit integer range.
Examples:
Input: arr[] = [1, 2, 3] Output: 20
Explanation: All subarray sums are: [1] = 1, [2] = 2, [3] = 3, [1, 2] = 3, [2, 3] = 5, [1, 2, 3] = 6. Thus total sum is 1 + 2 + 3 + 3 + 5 + 6 = 20.
Input: arr[] = [1, 3]
Output: 8Explanation: All subarray sums are: [1] = 1, [3] = 3, [1, 3] = 4. Thus total sum is 1 + 3 + 4 = 8.
Constraints :1 ≤ arr.size() ≤ 1050 ≤ arr[i] ≤ 104