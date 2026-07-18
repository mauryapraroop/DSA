class Solution {
public:
    bool wordPattern(string pattern, string s) {

        stringstream ss(s);
        vector<string> words;
        string word;

        while (ss >> word) {
            words.push_back(word);
        }

        if (pattern.size() != words.size()) {
            return false;
        }

        unordered_map<char, string> mp;
        unordered_set<string> st;

        for (int i = 0; i < pattern.size(); i++) {

            if (mp.count(pattern[i])) {
                if (mp[pattern[i]] != words[i]) {
                    return false;
                }
            }
            else {
                if (st.count(words[i])) {
                    return false;
                }

                mp[pattern[i]] = words[i];
                st.insert(words[i]);
            }
        }

        return true;
    }
};