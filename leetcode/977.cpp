/*
给你一个按 非递减顺序 排序的整数数组 nums，返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序。
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0 ;
        while( i < nums.size() )
        {
            nums[i] = nums[i]*nums[i] ;
            i++ ;
        }
        sort(nums.begin(),nums.end()) ;
        return nums ;
    }
};
