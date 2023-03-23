// https://leetcode.com/problems/implement-queue-using-stacks

class MyQueue {

    private final LinkedList<Integer> list;
    public MyQueue() {
        list = new LinkedList<>();
    }
    
    public void push(int x) {
        list.addLast(x);
    }
    
    public int pop() {
        return list.removeFirst();
    }
    
    public int peek() {
        return list.getFirst();
    }
    
    public boolean empty() {
        return list.isEmpty();
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */