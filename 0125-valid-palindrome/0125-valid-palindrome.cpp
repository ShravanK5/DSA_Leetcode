class Solution {
    private:
    bool validcharacter(char ch)
    {
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
    char toLowecase(char ch)
    {
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
        {
            return ch;
        }
        else
        {
            char temp = ch - 'A'+'a';
            return temp;
        }
    }

    bool Palindrome(string a)
    {
        int s=0;
        int e = a.length()-1;
        while(s<e)
        {
            if(a[s]!=a[e])
            {
                    return 0;
            }
            else
            {
                s++;
                e--;
            }
        }
        return 1;
    }

public:
    bool isPalindrome(string s) {
        int i=0;
        string temp="";
        for(int j=0;j<s.length();j++)
        {
            //sare faltu chars hatt gaye hai !!!
            if(validcharacter(s[j]))
            {
              temp.push_back(toLowecase(s[j]));

            }
        }
        //now ye string jo lower case mai convert karna hai

        // now check palindrome of the string
        return Palindrome(temp);
    }
};