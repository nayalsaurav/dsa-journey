class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>mp;
        for(auto &ch:s) mp[ch]++;
        for(auto &ch:t){
            if(mp.find(ch)!=mp.end()){
                mp[ch]--;
                if(mp[ch]==0) mp.erase(ch);
            }else{
                return false;
            }
        }
        return mp.empty();
    }
};
