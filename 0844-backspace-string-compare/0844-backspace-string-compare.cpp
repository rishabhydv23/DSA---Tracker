class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>ss;
        stack<char>st;

        for(int i=0;i<s.length();i++){
           if(s[i] == '#'){
            if(!ss.empty()){
                ss.pop();
            }
           }else{
            ss.push(s[i]);
           }
        }

        for(int i=0;i<t.length();i++){
           if(t[i] == '#'){
            if(!st.empty()){
                st.pop();
            }
           }else{
            st.push(t[i]);
           }
        }

        if(ss == st) return true;
        return false;

    }
};