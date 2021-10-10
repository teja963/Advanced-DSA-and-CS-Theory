void insert(struct TrieNode *root, string key)
{
    // code here
    struct TrieNode* tmp=root;
    for(int i=0;i<key.size();i++)
    {
        int index=key[i]-'a';
        if(!tmp->children[index])tmp->children[index]=getNode();
        tmp=tmp->children[index];
    }
    tmp->isLeaf=true;
}

//Function to use TRIE data structure and search the given string.
bool search(struct TrieNode *root, string key) 
{
    // code here
    struct TrieNode* tmp=root;
    for(int i=0;i<key.size();i++)
    {
        int index=key[i]-'a';
        if(!tmp->children[index])return false;
        tmp=tmp->children[index];
    }
    return tmp->isLeaf;
