public class Solution {
    public bool IsAnagram(string s, string t) {
        if(s.Length != t.Length){
            return false;
        }

        Dictionary<int, int> alpha = new();
        for(int i=0; i<s.Length; i++){
            if (!alpha.ContainsKey(s[i])) {
                alpha[s[i]] = 0;
            }
            alpha[s[i]]++;
        }

        for(int j=0; j<t.Length; j++){
            if (!alpha.ContainsKey(t[j])) {
                return false; 
            }

            alpha[t[j]]--;
            if(alpha[t[j]]<0){
                return false;
            }
        }
        return true;

    }
}
