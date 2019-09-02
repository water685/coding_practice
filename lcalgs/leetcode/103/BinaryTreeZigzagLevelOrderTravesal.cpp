//leecode 113. Binary Tree Zigzag Level Order Travesal
use namespace std;

class BinaryTreeZigzagLevelOrderTraversal{

public:
	vector<vector<int> ZigzagLevelOrder(TreeNode* root){
		if(root ==NULL) return vector<vector<int>>();

		vector<vector<int>> result;

		queue<TreeNode*> nodesQueue;
		nodesQueue.push(root);
		bool leftToright = true;
		//use queue for evry level, track the order left to right || right to left by one bool variable
		while( !nodesQueue.empty()){
			int size = nodesQueue.size();
			vector<int> row(size); //initialize the level
			for(int i = 0; i < size; i++){
				TreeNode* node = nodesQueue.front();
				nodesQueue.pop();

				int index = (leftToright) > i: size-1-i;

				row[index] = node->val;

				if(node->left) nodesQueue.push(node->left);
				if(node->right) nodesQueue.push(node->right);
			}

			leftToright = !leftToright;
			result.push_back(row);
		}
		return result;
	}
}