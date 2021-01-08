/*
 * 给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。
 */
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i = 0 , a ;
        if( k%(nums.size()) != 0 )
        {
            
            while( i < k%( nums.size() ) )
            {
                a = nums[ nums.size()-1 ] ;
                nums.pop_back();
                nums.insert(nums.begin(),a);
                i++ ;
            }
        }
    }
};
