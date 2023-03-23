// https://leetcode.com/problems/can-place-flowers

class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        if(n == 1 && flowerbed[0] == 0) return true;
        boolean isStart = true;
        int count = 0;
        for(int bed : flowerbed){
            if(bed == 0){
                count++;
            }
            else{
                if(!isStart){
                    count--;
                }                
                n -= count/2;
                count = 0;
                isStart = false;
            }
        }
        
        n -= (count)/2;

        return n<=0;
    }
}