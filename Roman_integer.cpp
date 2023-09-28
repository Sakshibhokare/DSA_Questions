class Solution {
public:
    int romanToInt(string s) {
       int n = s.size();
    unordered_map<char, int> mapp;

    mapp.insert({'I', 1});
    mapp.insert({'V', 5});
    mapp.insert({'X', 10});
    mapp.insert({'L', 50});
    mapp.insert({'C', 100});
    mapp.insert({'D', 500});
    mapp.insert({'M', 1000});

    int num, ans=0;
        for(int i=0; i<n;){
            if(i==n-1 || s[i]>=s[i+1]){
                num= mapp[s[i]];
                i++;
            }
            else{
                num=mapp[s[i+1]]-mapp[s[i]];
                i=i+2;
            }
            ans=ans+num;
        }

    return ans; 
    }
};
