// https://leetcode.com/problems/pascals-triangle-ii

class Solution {
    public List<Integer> getRow(int rowIndex) {
        List<Integer> prevList = Arrays.asList(1);
        List<Integer> curList = prevList;

        while(rowIndex-- >0){
            curList = new ArrayList<>();
            curList.add(1);
            int i = 0;
            while(i<prevList.size()-1){
                curList.add(prevList.get(i)+prevList.get(i+1));
                i++;
            }
            curList.add(1);
            prevList = curList;
        }

        return curList;
    }
}