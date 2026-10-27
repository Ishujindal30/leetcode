class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int ans = 0;
        int i = 0;

        while (i < n) {
            char ch = chars[i];
            int count = 0;

            while (i < n && chars[i] == ch) {
                i++;
                count++;
            }

            chars[ans++] = ch;

            if (count > 1) {
                string num = to_string(count);
                for (char d : num) {
                    chars[ans++] = d;
                }
            }
        }
        return ans;
    }
};