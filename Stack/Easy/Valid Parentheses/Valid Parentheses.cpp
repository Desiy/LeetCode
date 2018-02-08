class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;
        for(auto ch:s){
            if(ch=='('||ch=='['||ch=='{')
                temp.push(ch);
            else{
                if(temp.empty())
                    return false;
                else if(ch=='}'&&temp.top()=='{')
                   temp.pop();
                else if(ch==']'&&temp.top()=='[')
                    temp.pop();
                else if(ch==')'&&temp.top()=='(')
                   temp.pop();
                else return false;
            }           
        }
        return temp.empty();
    }
};