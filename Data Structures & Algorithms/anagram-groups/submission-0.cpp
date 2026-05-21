class Solution {
private:
bool isAnagram(string current, string old){
    if(current.length() != old.length()){
        return false;
    }

    unordered_map<int,int> alpha;
    for(int i=0; i<current.size(); i++){
        alpha[current[i]]++;
    }

    for(int j=0; j<old.size(); j++){
        alpha[old[j]]--;
        if(alpha[old[j]] < 0){
            return false;
        }
    }
    return true;
}

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;

        for (int i=0; i<strs.size(); i++){
            string current = strs[i];
            bool existing = false;

            for(int j=0; j<result.size(); j++){
                if(isAnagram(current, result[j][0])){
                    result[j].push_back(current);
                    existing = true; 
                    break;
                }
            }
            if(!existing){
                result.push_back({current});
            }
        }
        return result;
    }
};
