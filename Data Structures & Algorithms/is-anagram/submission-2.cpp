class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<int, int> alpha;

        for(int i=0; i<s.length(); i++){
            alpha[s[i]]++;
        }

        for(int j=0; j<t.length(); j++){
            alpha[t[j]]--;
            if(alpha[t[j]]< 0){
                return false;
            }
        }
        return true;
    }
};
