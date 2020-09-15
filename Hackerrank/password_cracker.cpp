//Password Craker


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include <unordered_set>

using namespace std;


void putReverses(vector< string > &words, unordered_set< string > &wordSet)
{
    int n = words.size();
    for(int i = 0;i != n;i++)
    {
        reverse(words[i].begin(), words[i].end());
        wordSet.insert(words[i]);
    }
}

vector< string > findComb(const string &str, vector< string > &words)
{
    vector< string > result;
    int m = str.size();
    
    unordered_set< string > wordSet;
    putReverses(words, wordSet);
    
    vector< char > valid(m + 1, 0);
    valid[0] = 1;
    vector< int > validLens(m + 1);
    
    for(int len = 1;len <= m;len++)
    {
        int i = len - 1;
        string word;
        for(int j = i;j >= 0;j--)
        {
            word += str[j];
            if(valid[j] && wordSet.find(word) != wordSet.end())
            {
                valid[len] = 1;
                validLens[len] = len - j;
                break;
            }
        }
    }
    
    if(valid[m] == 0) { return result; }
    
    int len = m;
    while(len)
    {
        result.push_back(str.substr(len - validLens[len], validLens[len]));
        len -= validLens[len];
    }
    
    reverse(result.begin(), result.end());
    return result;
}


int main()
{
    int T, N;
    string word, str;
    cin >> T;
    while(T--)
    {
        cin >> N;
        vector< string > words;
        while(N--)
        {
            cin >> word;
            words.push_back(word);
        }
        
        cin >> str;
        
        vector< string > comb(findComb(str, words));
        if(comb.empty()) { cout << "WRONG PASSWORD"; }
        else
        {
            int m = comb.size();
            cout << comb[0];
            for(int i = 1;i != m;i++)
            {
                cout << " " << comb[i];
            }
        }
        
        cout << endl;
    }
    
    return 0;
}
