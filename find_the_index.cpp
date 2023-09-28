class Solution {
public:
    int strStr(string h, string n) {
        // return (h.find(n)<h.length()) ? h.find(n) : -1;
        
        // if needle doesn't exist in haystack
        if(h.find(n) == string :: npos) return -1;
        
        int a = h.size() , b = n.size() ;

        for(int i = 0 ; i < a - b + 1 ; i++ )
            // if any substring in haystack with size m == needle 
            if(n == h.substr(i,b) )
                return i;
        return -1;
        
    }
};
