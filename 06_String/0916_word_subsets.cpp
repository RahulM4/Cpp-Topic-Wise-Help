#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long



class Solution {
public:
    vector<string> wordSubsets(vector<string>& w1, vector<string>& w2) {
        vector<string> ans;
        int  n1=w1.size(), n2 = w2.size();
        vector<int> alpha1(26,0);
        for(int i=0;i<n2;i++){
            vector<int> alpha2(26,0);
            for(int j=0;j<w2[i].size();j++){
                alpha2[w2[i][j]-'a']++;
            }
            for(int j=0;j<26;j++){
                alpha1[j] = max(alpha1[j],alpha2[j]);
            }
        }
        for(int i=0;i<n1;i++){
            vector<int> alpha3(26,0);
            for(int j=0;j<w1[i].size();j++){
                alpha3[w1[i][j]-'a']++;
            }
            bool flag = true;
            for(int j=0;j<26;j++){
                if(alpha1[j]>alpha3[j]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                ans.push_back(w1[i]);
            }
        }
        return ans;  
        
    }
};

class Solution1 {
    public:
    // count frequency in word
    vector<int> cntFreq(string &word) {
        vector<int> freq(26, 0); //store frequency of each characters
        for (int i = 0; i < word.size(); i++) {
            freq[word[i] - 'a']++;
        }
        return freq;
    }

    vector<string> wordSubsets(vector<string>& w1, vector<string>& w2) {
        vector<string> ans;
        vector<int> maxFreq(26, 0);
        for(auto & word : w2) {
            vector<int> freq = cntFreq(word);
            for(auto i =0; i<26; i++) {
                maxFreq[i] = max(maxFreq[i], freq[i]);
            }
        }
        for(auto & word : w1) {
            vector<int> freq = cntFreq(word);
            int flag = 1;
            for(auto i =0; i<26; i++) {
                if(freq[i] < maxFreq[i]) {
                    flag = 0;
                    break;
                }
            }
            if(flag) {
                ans.push_back(word);
            }

        }
        return ans;


    }
};

int main()
{
    Solution s;
    vector<string> w1 = {"amazon","apple","facebook","google","leetcode"};
    vector<string> w2 = {"e","o"};
    vector<string> ans = s.wordSubsets(w1,w2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}