class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int  i = 0 ;
        if( flowerbed.at(0) == 0 && flowerbed.size() == 1 && n == 1 )
            return true ;
        if(n==0)
            return true ;
        while( i < flowerbed.size() )
        {
            if(  i == 0 )
            {
                if( flowerbed.at(i) == 0 && flowerbed.at(i+1)==0)
                {
                    flowerbed[i] = 1 ;
                    n = n - 1 ;
                }
                
            }else if( i == flowerbed.size() - 1 )
            {
                if( flowerbed.at(i) == 0 && flowerbed.at(i-1)==0)
                {
                    flowerbed[i] = 1 ;
                    n = n - 1 ;
                }
            }
            else 
            {
                if( flowerbed.at(i) == 0 && flowerbed.at(i-1)==0 && flowerbed.at(i+1) == 0 )
                {
                    flowerbed[i] = 1 ;
                    n = n - 1 ;
                }
            }
            i++ ;
        }
        if( n <= 0 )
            return true ;
        else
            return false ;
    }
};
