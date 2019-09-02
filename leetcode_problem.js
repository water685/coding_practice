// Leetcode. 76 Minimum Substring Windows




leetcode 336 palindrome pair 

Public class solution {
	private class TrieNode{
		TrieNode[] next;
		int index;
		List<Integer> list;

		TrieNode(){
			next = new TrieNode[26];
			index = -1;
			list = new Arraylist<>();
		}
	}

	public List<List<Integer>> palindromePairs(Strng[] words){

	}

	private void addWord(Strng word, int index, TrieNode root){
		for(int i = word.length() -1; i >=0; i--){
			int j = word.charAt(i) - 'a';

			if(root.next[j] == null){
				root.next = new TrieNode();
			}
			if(isPalindrome(word, 0, i)){
				root.list.add(index);
			}
			root = root.next;
		}
	}
}