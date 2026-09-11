class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }
        vector<int> search(26);
        for(int i = 0 ; i < s.length() ; i++)
        {
            search[s[i] - 'a']++;
        }
        for(int j = 0; j < t.length() ; j++)
        {
            search[t[j] - 'a']--;
        }
        for(int i = 0; i < 26 ; i++)
        {
            if(search[i] > 0)
            {
                return false;
            }
        }
        return true;
    }
};
