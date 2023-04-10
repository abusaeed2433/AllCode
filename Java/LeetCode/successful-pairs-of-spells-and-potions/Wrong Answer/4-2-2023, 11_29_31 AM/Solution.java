// https://leetcode.com/problems/successful-pairs-of-spells-and-potions

class Solution {
    public int[] successfulPairs(int[] spells, int[] potions, long success) {
        Arrays.sort(potions);

        int n = spells.length;
        int m = potions.length;
        int[] ans = new int[n];

        for(int i=0;i<n;i++){
            int mn = (int)Math.ceil(success/(double)spells[i]);
            int index = find(potions,mn);
            //System.out.println(mn+" "+index);
            ans[i] = (index <= 0) ? 0 : m-index;
        }
        return ans;
    }

    private int find(int[] potions, int val){
        int l = 0, h = potions.length - 1;
        while(l <= h){
            int m = (l+h)/2;            
            if(potions[m] >= val) h = m-1;
            else l = m+1;
        }
        return h+1;
    }
}