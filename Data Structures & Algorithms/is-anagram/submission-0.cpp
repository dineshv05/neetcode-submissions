class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        for(int i=0; i<s.length(); i++){
            char current = s[i];
            bool match_exist = false;
            for(int j=0; j<t.length();j++){
                if(t[j] == current){
                    t.erase(j,1);
                    match_exist = true;
                    break;
                }
            }
            if(!match_exist){
                return false;
            }
        }
        return true;
    }
};
