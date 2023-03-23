// https://leetcode.com/problems/design-add-and-search-words-data-structure

class Trie{
    private Trie[] childs = new Trie[26];
    private boolean isEnd = false;
    public void insert(Character ch, boolean isEnd){
        if(childs[ch-'a'] == null){
            childs[ch-'a'] = new Trie();
        }
        if(!childs[ch-'a'].isEnd){
            childs[ch-'a'].isEnd = isEnd;
        }
    }
    public Trie contains(Character ch){
        return childs[ch-'a'];
    }
    public boolean isEnd(){
        return true;
    }
}

class WordDictionary {    
    private Trie root;
    public WordDictionary() {
        root = new Trie();
    }
    
    public void addWord(String word) {
        int n = word.length() - 1;
        for(int i=0; i<=n; i++){
            root.insert(word.charAt(i),i==n);
        }
    }
    
    public boolean search(String word) {
        return search(root,word,0);
    }

    private boolean search(Trie cur,String s, int index){
        int n = s.length();
        if(index >= n) return true;


        Character ch = s.charAt(index), mx = ch;

        if(s.charAt(index)=='.'){
            ch = 'a';
            mx = 'z';            
        }                
        
        while(ch <= mx ){
            Trie newRoot = root.contains(ch);
            if( newRoot != null){
                if(index == n-1){
                    return newRoot.isEnd();
                }
                return search(newRoot,s,index+1);
            }
            ch++;
        }
        return false;
    }
}

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary obj = new WordDictionary();
 * obj.addWord(word);
 * boolean param_2 = obj.search(word);
 */