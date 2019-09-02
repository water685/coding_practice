//leetcode 39, combination sum
// give a set of number(without duplicates)
//find all unique combination sum to the target
//unlimited number of items can be used

//backtracking implementation.
use namespace std;

class combination{

public:
	vector<int> combinationSum(vector<int> candidates, int target){
		sort(candidates.begin(), candidates.end());
		vector<vector<int>> res;
		vector<int> commbiantion;
		combinationSum(candidates, target, res, combination, 0);
		return res;
	}

private:
	void combinationSum(vector<int> &candidates, int target, vector<vector<int>> &res, vector<int> &combination, int begin){
		if(!target){
			res.push_back(combination);
			return;
		}

		for(int i = begin; i != candidates; i++){
			combination.push_back
		}
	}
}