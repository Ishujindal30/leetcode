class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        string temp_1 = "";
        for(int i = 0; i < n; i++){
            temp_1.push_back('.');
        }
        ans.push_back(temp_1);
        string temp_2="";
        for(int i = 0; i < n-1; i++){
            temp_2.push_back('#');
        }
        temp_2.push_back('.');
        for(int j = 0; j < m-1; j++){
            ans.push_back(temp_2);
        }
        return ans;
    }
};