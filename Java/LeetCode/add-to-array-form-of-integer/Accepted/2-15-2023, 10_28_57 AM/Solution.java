// https://leetcode.com/problems/add-to-array-form-of-integer

class Solution {
    public List<Integer> addToArrayForm(int[] num, int k) {

        
        List<Integer> ans = new ArrayList<>();
        int i = num.length-1;
        int rem = 0,sum;

        do{
            sum = ( i>=0 ? num[i] : 0 ) + k%10 + rem;
            ans.add( sum%10 );
            rem = sum/10;
            i--;
            k /= 10;
        }
        while(i >=0  || k>0);

        if(rem > 0){
            ans.add(rem);
        }
        Collections.reverse(ans);
        return ans;
        
    }
}