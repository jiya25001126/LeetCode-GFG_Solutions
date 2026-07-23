# [nCr](https://www.geeksforgeeks.org/problems/ncr1019/1)
## Medium
Given two integer values n and r, the task is to find the value of&nbsp;Binomial Coefficient&nbsp;nCr

A&nbsp;binomial coefficient nCr&nbsp;can be defined as the coefficient of xr in the expansion of&nbsp;(1 + x)n that gives the number of ways to choose r objects from a set of n objects without considering the order.
The binomial coefficient&nbsp;nCr&nbsp;is calculated as : C(n,r) = n! / r! * (n-r) !

Note: If r is greater than n, return 0.It is guaranteed that the value of nCr&nbsp;will fit within a 32-bit integer.
Examples:
Input: n = 5, r = 2
Output: 10
Explaination: The value of 5C2 is calculated as 5!/(5−2)!*2! = 5!/3!*2! = 10.
Input: n = 2, r = 4
Output: 0
Explaination: Since r is greater than n, thus 2C4 = 0
Input: n = 5, r = 0Output: 1
Explaination: The value of 5C0 is calculated as 5!/(5−0)!*0! = 5!/5!*0! = 1.
Constraints:1 ≤ n ≤ 1000 ≤ r ≤ 100