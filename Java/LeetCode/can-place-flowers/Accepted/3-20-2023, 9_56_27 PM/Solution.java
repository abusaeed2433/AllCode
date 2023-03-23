// https://leetcode.com/problems/can-place-flowers

class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
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
        
        if(isStart) count++;
        n -= (count)/2;        

        return n<=0;
    }
}