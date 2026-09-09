class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        for(auto &x:s){
            if(x=='(')
                st.push(')');
            else if(x=='{')
                st.push('}');
            else if(x=='[')
                st.push(']');
            else{
                if(!st.empty()&&st.top()==x) st.pop();
                else return false;
            }
        }
        return st.empty();
    }
};
