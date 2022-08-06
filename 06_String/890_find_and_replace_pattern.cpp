#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

class Solution
{
public:
    vector<string> findAndReplacePattern(vector<string> words, string p)
    {
        vector<string> ans;
        for (string word : words)
            if (Find(word) == Find(p))
                ans.push_back(word);
        return ans;
    }

    string Find(string word)
    {
        unordered_map<char, int> mp;
        for (char ch : word)
            if (!mp.count(ch))
                mp[ch] = mp.size();
        for (int i = 0; i < word.length(); i++)
            word[i] = 'a' + mp[word[i]];
        return word;
    }
};

int main()
{
    Solution s;
    FIO;
    vector<string> words = {"abc", "deq", "mee", "aqq", "dkd", "ccc"};
    string pattern = "abb";
    vector<string> ans = s.findAndReplacePattern(words, pattern);
    for (auto &word : ans)
    {
        cout << word << " ";
    }

    return 0;
}