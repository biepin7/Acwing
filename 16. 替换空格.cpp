class Solution {
public:
    string replaceSpaces(string &str) {
        string res;
        for(auto s : str)
        {
            if(s!=' ') res+=s;
            else{
                res+="%20";
            }
        }
        return res;
    }
};