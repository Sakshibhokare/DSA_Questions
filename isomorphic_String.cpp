class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char>mp1;
        unordered_map<char, char>mp2;
        
        if(s.length()!=t.length())
            return false;
        
        for(int i=0; i<s.length(); i++){
             char sChar=s[i];
            char tChar=t[i];
            if(mp1.find(sChar)==mp1.end() && mp2.find(tChar)==mp2.end()){
                mp1[sChar]=tChar;
                mp2[tChar]=sChar;
            }
            else{
                if(mp1[sChar]!=tChar || mp2[tChar]!=sChar)
                    return false;
            }
            
        }
        return true;
    }
};
