// https://leetcode.com/problems/pascals-triangle

class Solution {
    public List<List<Integer>> generate(int numRows) {

        List< List<Integer> > list = new ArrayList<>();

        List<Integer> tmpList = new ArrayList<>();
        tmpList.add(1);

        list.add(tmpList);
        for(int i=1; i<numRows; i++){
            tmpList = new ArrayList<>();
            
            tmpList.add(1);

            for(int j=0; j<i-1; j++){
                tmpList.add( list.get(i-1).get(j) + list.get(i-1).get(j+1) );
            }

            tmpList.add(1);

            list.add( tmpList );
        }

        return list;

    }
}