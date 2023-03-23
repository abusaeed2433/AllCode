// https://leetcode.com/problems/can-place-flowers

class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        int count = 0;
        for(int bed : flowerbed){
            if(bed == 0){
                count++;
            }
            else{
                n -= count/2;
                count = 0;
            }
        }

        n -= (count)/2;

        return n<=0;
    }
}