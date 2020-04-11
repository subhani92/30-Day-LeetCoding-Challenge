/*Given an array of strings, group anagrams together.

Example:

Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]

Note:

    All inputs will be in lowercase.
    The order of your output does not matter.
*/

class Solution {
    
    /*int max_size = 256;
    bool anagram(string s1, string s2){
        
        int cnt[256] = {0};
        int i;
        for(i=0;s1[i]&&s2[i];i++){
            cnt[s1[i]]++;
            cnt[s2[i]]--;
        }
        if(s1[i] || s2[i])
            return false;
        
        for(i=0;i<256;i++)
            if(cnt[i])
                return false;
        
        return true;
    }*/
    
public:
    
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        
     
        //int a[size]={0};
        map<string, vector<string> > m;
        for(string s : str){
            string s1 = s;
            sort(s1.begin(), s1.end());
            m[s1].push_back(s);
        }
        vector<vector<string>>  ans;
        for(auto i:m)
            ans.push_back(i.second);
       
        return ans;
    }
};
