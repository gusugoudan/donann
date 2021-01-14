/*
给定由若干 0 和 1 组成的数组 A。我们定义 N_i：从 A[0] 到 A[i] 的第 i 个子数组被解释为一个二进制数（从最高有效位到最低有效位）。

返回布尔值列表 answer，只有当 N_i 可以被 5 整除时，答案 answer[i] 为 true，否则为 false。

 

示例 1：

输入：[0,1,1]
输出：[true,false,false]
解释：
输入数字为 0, 01, 011；也就是十进制中的 0, 1, 3 。只有第一个数可以被 5 整除，因此 answer[0] 为真。

*/
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        int i = 0 ;
        long j = 0 ;
        vector<bool> vec;
        while ( i < A.size() )
        {
            j <<= 1;
            j = j + A[i];
            j = j%10;
            if( j%5 == 0 )
                vec.push_back(true);
            else
                vec.push_back(false);
            i++ ;
        }
        return vec ;
    }
};
