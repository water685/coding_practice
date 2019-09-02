//leetcode. 986 Interval List Intersections
class Solution {
public: 
	vector<Interval> intervalIntersection(vector,Interval> &A, vector<Interval> &B){
		vector<Inteval> res;
		for(auto i = 0, j = 0; i <A.size(), j < B.size(); ){
			if(A[i].end < B[j].start) i++;
			else if(A[i].start > B[j].end) j++;
			else{
				res.push_back({max(A[i].start, B[J].start), min(A[i].end, B[j].end)});
				if(A[i].end < B[j].end) i++;
				else j++;
			}
		}
		return res;
	}
	
}