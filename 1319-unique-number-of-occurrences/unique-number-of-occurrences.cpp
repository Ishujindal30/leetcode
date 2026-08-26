class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
         int freq[2001] = {0};
        for (int num : arr) {
            freq[num + 1000]++;
        }
        
        vector<int> counts;
        for (int i = 0; i < 2001; i++) {
            if (freq[i] > 0) {
                counts.push_back(freq[i]);
            }
        }
        
        sort(counts.begin(), counts.end());
        
        for (int i = 1; i < counts.size(); i++) {
            if (counts[i] == counts[i - 1]) {
                return 0;
            }
        }
        
        return 1;
    }
};