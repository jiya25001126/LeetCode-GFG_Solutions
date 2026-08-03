# [Even Greater than Odd](https://www.geeksforgeeks.org/problems/rearrange-array-such-that-even-positioned-are-greater-than-odd4804/1)
## Easy
Given an array arr[], rearrange its elements according to 1-based indexing such that for every even index i, arr[i] is greater than or equal to arr[i-1], and for every odd index i, arr[i] is less than or equal to arr[i-1]. Return the rearranged array that satisfies these conditions for all valid indices.








Note: The driver code will print "true" if your output array satisfies the conditions; otherwise, it will print "false".








Example:
Input: arr[] = [1, 2, 2, 1]
Output: [1, 2, 1, 2]
Explanation: Both 2s are at even positions and 1s at odd positions, satisfying the given conditions.
Input: arr[] = [1, 3, 2]
Output: [1, 3, 2]
Explanation: The array is already arranged according to the conditions.
Constraints:1 ≤ arr.size() ≤ 1051 ≤ arr[i] ≤ 104