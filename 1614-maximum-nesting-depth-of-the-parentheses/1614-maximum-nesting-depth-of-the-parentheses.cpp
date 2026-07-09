class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int count =0;
        for ( char ch : s)
        {
            if( ch == '('){
                count++;
            }
            else if( ch == ')')
            {
                depth = max(count,depth);
                count --;
            }
        }
        return depth;
    }
};