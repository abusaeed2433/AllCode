// https://leetcode.com/problems/design-add-and-search-words-data-structure

class Trie{
    private Trie[] childs = new Trie[26];
    public boolean isEnd = false;

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
}

class WordDictionary {    
    private Trie root;
    public WordDictionary() {
        root = new Trie();
    }
    
    public void addWord(String word) {
        addWord(root,word,0);
    }

    private void addWord(Trie root,String word, int index){
        int n = word.length();
        
        if(index >= n){
            root.isEnd = true;
            return;
        }
        
        Character ch = word.charAt(index);
        Character mx = ch;
            
        if(ch == '.'){                
            ch = 'a';
            mx = 'z';
        }

        while(ch <= mx){
            root.insert(ch,index==n);
            addWord(root.contains(ch),word,index+1);
            ch++;
        }

    }
    
    public boolean search(String word) {
        return search(root,word,0);
    }

    private boolean search(Trie cur,String s, int index){
        int n = s.length();
        if(index >= n) {
            return cur.isEnd;
        }

        Character ch = s.charAt(index);
        Character mx = ch;

        if(s.charAt(index)=='.'){
            ch = 'a';
            mx = 'z';
        }
        
        boolean isPossible = false;
        while(ch <= mx ){
            Trie newRoot = cur.contains(ch);
            if( newRoot != null){
                if(index == n-1 && newRoot.isEnd){
                    return true;
                }
                isPossible = search(newRoot,s,index+1);
                if(isPossible) return true;
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