class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int arr_s1[26] = {0};
        int size_s1 = s1.length();
        int size_s2 = s2.length();
        if(size_s1 > size_s2) return false;
        for(int i = 0 ; i < size_s1 ; i++){
            arr_s1[(s1[i]) - 'a']++;
        }
        for(int i = 0 ; i <= size_s2 - size_s1 ; i++){
            int arr_s2[26] = {0};
            for(int j = i ; j < i + size_s1 ; j++){
                arr_s2[(s2[j]) - 'a']++;
            }
            if(equal(begin(arr_s1), end(arr_s1), begin(arr_s2))){
                return true;
            }
        }
        return false;

    }
};