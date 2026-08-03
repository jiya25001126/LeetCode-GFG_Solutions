# [Generating All Subarrays](https://www.geeksforgeeks.org/problems/generating-all-subarrays/1)
## Easy
Given an array arr[], generate and return all possible subarrays. The subarrays must be returned in the following order:&nbsp; &nbsp; &nbsp; 1. Subarrays starting from the first element, followed by subarrays starting from the second element, and so on.&nbsp; &nbsp; &nbsp; 2. For each starting index, subarrays should be in increasing length.
Examples:&nbsp;
Input: arr[] = [1, 2, 3]Output: [[1], [1, 2], [1, 2, 3], [2], [2, 3], [3]]Explanation: Starting with the first element, we generate subarrays [1], [1, 2], and [1, 2, 3]. Then, starting from the second element, we get [2] and [2, 3].&nbsp; Finally, starting from the third element, we only get [3].
Input: arr[] = [1, 2]Output: [[1], [1, 2], [2]]Explanation: Starting with the first element, we generate subarrays [1] and [1, 2]. Then, starting from the second element, we get [2].
Input: arr[] = [1, 1]Output: [[1], [1, 1], [1]]Explanation: Starting with the first element, we generate subarrays [1] and [1, 1] (including both elements). Starting from the second element, we only get the subarray [1].
Constraints:1 ≤ arr.size() ≤ 2001 ≤ arr[i] ≤ 103