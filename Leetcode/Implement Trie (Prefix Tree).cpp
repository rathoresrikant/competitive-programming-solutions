class TrieNode
{
public:
    TrieNode *next[26];
    bool isleaf;
    TrieNode()
    {
        isleaf = false;
        for (int i = 0; i < 26; i++)
            next[i] = NULL;
    }
};

class Trie
{
    TrieNode *root;

public:
    /** Initialize your data structure here. */
    Trie()
    {
        root = new TrieNode();
    }

    /** Inserts a word into the trie. */
    void insert(string word)
    {
        TrieNode *tmp = root;
        int idx;
        for (int i = 0; i < word.length(); i++)
        {
            idx = word[i] - 'a';
            if (tmp->next[idx] == NULL)
            {
                tmp->next[idx] = new TrieNode();
            }
            tmp = tmp->next[idx];
        }
        tmp->isleaf = true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word)
    {
        TrieNode *tmp = root;
        int idx;
        for (int i = 0; i < word.length(); i++)
        {
            idx = word[i] - 'a';
            tmp = tmp->next[idx];
            if (tmp == NULL)
                return false;
        }
        return tmp->isleaf;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix)
    {
        TrieNode *tmp = root;
        int idx;
        for (int i = 0; i < prefix.length(); i++)
        {
            idx = prefix[i] - 'a';
            tmp = tmp->next[idx];
            if (tmp == NULL)
                return false;
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */