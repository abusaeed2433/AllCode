// https://leetcode.com/problems/design-hashmap

class MyHashMap {

    private static final int size = 17777;
    private LinkedList<Node>[] arr;

    public MyHashMap() {
        arr = new LinkedList[size];
    }

    private int hash(int key){
        return key%size;
    }
    
    public void put(int key, int value) {
        int index = hash(key);
        if(arr[index] == null){
            arr[index] = new LinkedList<>();
        }

        Node nd = getNode(arr[index],key);
        if(nd == null){
            nd = new Node(key,value);
            arr[index].addFirst(nd);
        }
        nd.val = value;
    }

    private Node getNode(LinkedList<Node> list, int key){
        for(Node nd : list){
            if(nd.key == key){
                return nd;
            }
        }
        return null;
    }

    
    public int get(int key) {
        int index = hash(key);
        if(arr[index] == null) return -1;

        Node nd = getNode(arr[index],key);
        return (nd == null) ? -1 : nd.val;
    }
    
    public void remove(int key) {
        int index = hash(key);
        if(arr[index] == null) return;
        for(Node nd : arr[index]){
            if(nd.key == key){
                arr[index].remove(nd);
                return;
            }
        }
    }

    class Node{
        int key, val;
        Node(int key, int val){
            this.key = key;
            this.val = val;
        }        
    }
}



/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap obj = new MyHashMap();
 * obj.put(key,value);
 * int param_2 = obj.get(key);
 * obj.remove(key);
 */