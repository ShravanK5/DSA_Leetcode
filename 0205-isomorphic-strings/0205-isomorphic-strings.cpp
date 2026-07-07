class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.size() != t.size())
        return false;

        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;

        for( int i =0 ; i < s.size();i++)
        {
            char ch1 = s[i];
            char ch2 = t[i];

            // if the new char of s in not previously in the map insert it as s->t
            if ( ! mp1.count(ch1) )
            {
                mp1.insert({ch1,ch2});
            }
            //for t this is
            if ( ! mp2.count(ch2) )
            {
                mp2.insert({ch2,ch1});
            }

        // u reach here when the char occured is either previously in s map or t map if yes check if s maps correctly to t or if t is matched with s only, this check that s is not map to t or t is not mapped to s therefore return s false
            if(mp1[ch1] !=  ch2 || mp2[ch2] != ch1)
            {
                return false;
            }
        }

    return true;
       
    }
};