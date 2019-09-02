class solution{
	public List<List<Integer>> palindromePairs(String[] words){
		List<List<Integer>> res = new ArrayList<>();
		if(words == null || words.length == 0) return res;
		Map<String, Intger> map = new HashMap<>();
		for(int i = 0; i < words.length; i++){
			map.put(words[i], i);
		}
		for(int i = 0; i < words.length; i++){
			for(int j = 0; j <= words[i].length; j++){ //partition point
				String str1 = words[j].substring(0, j);
				String str2 = words[j].substring(j);
				if(isPalindrome(str1)){
					String str2rvs = new StringBuilder(str2).reverse().toString();
					if(map.containsKey(str2rvs) && map.get(str2rvs) != i){
						List<Integer> list = new ArrayList<>();
						list.add(map.get(str2rvs));
						list.add(i);
						res.add(list);
					}
				}

				if(isPalindrome(str2)){
					String str1rvs = new StringBuilder(str1).reverse().toString();
					if(map.containsKey(str1rvs) && map.get(str1rvs) != i){
						List<Integer> list = new ArrayList<>();
						list.add(map.get(str1rvs));
						list.add(i);
						res.add(list);
					}
				}
			}
		}
		return res;
	}

	private boolean isPalindrome(String str){
		int left = 0;
		int right = str.length() - 1;
		while(left <= right){
			if(str.charAt(left++) == str.charAt(right--)) return false;
		}
		return true;
	}
}