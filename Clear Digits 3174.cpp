class Solution {
public:

        bool isnum(char ch)
        {
            return(ch >= '0' && ch <= '9');
        }

    string clearDigits(string s) {
        string str = "";
        int count = 0;
        for(int i = s.size() - 1; i >= 0; --i)
        {
            if(isnum(s[i]))  count++;
            else
            {
                if(count == 0) str += s[i];
                else count--;
            }
        }
        reverse(str.begin(), str.end());
        return str;      
    }
};