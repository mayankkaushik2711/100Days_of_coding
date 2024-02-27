class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> prev;
        vector<int> vect;

        prev.push_back(1);
        ans.push_back(prev);
        for(int i=2 ; i<=numRows ; i++){
            vect.push_back(1);
            for(int j=1 ; j<prev.size() ; j++){
                vect.push_back(prev[j]+prev[j-1]);
            }
            vect.push_back(1);
            ans.push_back(vect);
            prev=vect;
            vect.clear();

        }
        return ans;
    }
};