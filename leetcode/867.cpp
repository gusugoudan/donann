/*
给定一个矩阵 A， 返回 A 的转置矩阵。

矩阵的转置是指将矩阵的主对角线翻转，交换矩阵的行索引与列索引。
*/
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> ve;
        if ( A.empty() == true )
            return A ;
        int m =A.size() , n = A[0].size() ;
        int i = 0 , j = 0 ;
        for( ; i < n ; i++ )
        {
            vector<int> vect ;
            for( j = 0 ; j < m ; j++ )
            {
                vect.push_back( A[j][i] ) ;
            }
            ve.push_back(vect) ;
        }
        return ve ;
    }
};
