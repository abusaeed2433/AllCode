// https://leetcode.com/problems/clone-graph

/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> neighbors;
    public Node() {
        val = 0;
        neighbors = new ArrayList<Node>();
    }
    public Node(int _val) {
        val = _val;
        neighbors = new ArrayList<Node>();
    }
    public Node(int _val, ArrayList<Node> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
}
*/

class Solution {
    public Node cloneGraph(Node node) {
        if(node == null) return null;

        Node nd = new Node(node.val);

        List<Node> list = new ArrayList<>();
        for(int i=1; i<=100; i++){
            if(i == node.val){
                list.add(nd);
                continue;
            }
            list.add(new Node(i));
        }

        Queue<Node> q = new LinkedList<>();
        q.add(node);

        boolean[] visited = new boolean[101];
        //visited[node.val] = true;


        while(!q.isEmpty()){
            Node tmp = q.poll();
            visited[tmp.val] = true;
            for(Node nde : tmp.neighbors){
                if(!visited[nde.val]) {
                    q.add(nde);
                }
                if(!list.get(tmp.val-1).neighbors.contains(list.get(nde.val-1))){
                    list.get(tmp.val-1).neighbors.add(list.get(nde.val-1));
                }
            }
        }

        return nd;

    }

}

