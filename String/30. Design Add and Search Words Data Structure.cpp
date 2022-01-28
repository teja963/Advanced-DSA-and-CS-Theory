class WordDictionary {
public:
    unordered_map<int, vector<string>>m;
    WordDictionary() {
        
    }
    void addWord(string word) {
       m[word.size()].push_back(word);  
    }
    bool issame(string a, string b)
    {
        for(int i = 0; i < a.size(); i++)
        {
            if(b[i] == '.')continue;
            if(a[i] != b[i])return false;
        }
        return true;
    }
    bool search(string word)
    {
       int n = word.size();
        for(int i = 0; i < m[n].size(); i++)
        {
            string tmp = m[n][i];
            if(issame(tmp, word))
            {
                return true;
            }
        }
        return false;
    }
};

