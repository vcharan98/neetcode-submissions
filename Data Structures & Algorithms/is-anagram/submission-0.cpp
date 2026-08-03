class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        //solution 1
        /*sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s == t;*/

        //solution 2
        /*unordered_map<char, int> countS;
        unordered_map<char, int> countT;
        for(int i = 0; i < s.length(); i++){
            countS[s[i]]++;
            countT[t[i]]++;
        }
        return countS==countT;*/

        //solution 3
        vector<int> count(26, 0);
        for (int i = 0; i < s.length(); i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int val : count) {
            if (val != 0){
                return false;
            }
        }
        return true;
    }
};
