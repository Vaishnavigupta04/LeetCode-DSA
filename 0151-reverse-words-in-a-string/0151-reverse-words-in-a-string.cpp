class Solution {
public:
    string reverseWords(string s) {
        string m;
        vector<string> words;
        string word = "";

        int n = s.length();

        for(int i = 0; i < n; i++) {
            if(s[i] != ' ')
                word += s[i];
            else if(word != "") {
                words.push_back(word);
                word = "";
            }
        }

        if(word != "")
            words.push_back(word);

        for(int i = words.size() - 1; i >= 0; i--) {
            m += words[i];

            if(i != 0)
                m += " ";
        }

        return m;
    }
};