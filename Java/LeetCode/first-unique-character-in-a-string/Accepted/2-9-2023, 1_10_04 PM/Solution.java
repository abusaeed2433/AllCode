// https://leetcode.com/problems/first-unique-character-in-a-string

class Solution {
    public int firstUniqChar(String s) {

        Node[] map = new Node[26];

        for(int i=0; i<26; i++){
            map[i] = new Node();
        }            

        for(int i=0; i<s.length(); i++){
            map[ s.charAt(i)-97 ].process(i,s.charAt(i));
        }

        Arrays.sort(map);

        for(Node nd : map){
            if(nd.fPos == -1) continue;
            if(nd.count == 1) return nd.fPos;
        }

        return -1;        
    }

    class Node implements Comparable<Node>{
        public int count = 0, fPos = -1;
        public Character ch;

        public void process(int index,char ch){
            if(fPos == -1) fPos = index;
            this.ch = ch;
            count++;
        }
        
        @Override
        public int compareTo(Node node){
            return fPos - node.fPos;
        }
    }

}