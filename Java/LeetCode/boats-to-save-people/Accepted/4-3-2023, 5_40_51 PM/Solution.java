// https://leetcode.com/problems/boats-to-save-people

class Solution {
    public int numRescueBoats(int[] people, int limit) {
        int i = 0, j = people.length -1;
        int ans =0 ;

        Arrays.sort(people);

        while(i <= j){
            if(people[i] + people[j] <= limit){
                i++;
            }
            j--;
            ans++;
        }
        /*
            1 2 2

        */
        return ans;
    }
}