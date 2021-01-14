/*
给定一个整型数组，在数组中找出由三个数组成的最大乘积，并输出这个乘积。

示例 1:

输入: [1,2,3]
输出: 6

排序之后最大乘积就两种情况：1、如果全是正数就是最后三个数相乘 2、如果有负数最大的乘机要么是最后三个数相乘，要么是两个最小的负数相乘再乘以最大的正数
*/
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend()) ;
        int a = nums[0]*nums[1]*nums[2];
        int b = nums[0]*nums[nums.size()-1]*nums[nums.size()-2];
        return a>b?a:b;
    }
  
};
