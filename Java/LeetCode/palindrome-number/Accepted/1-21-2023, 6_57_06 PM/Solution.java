// https://leetcode.com/problems/palindrome-number

class Solution {
    public boolean isPalindrome(int x) {
        if(x < 0) return false;

        ArrayList<Integer> arr = new ArrayList<>();

        while(x > 0){
            arr.add(x%10);
            x /= 10;
        }

        int nc = arr.size() / 2;

        for(int i=0;i<nc;i++){
            if(arr.get(i) != arr.get(arr.size()-i-1)) return false;
        }

        return true;

    }
}