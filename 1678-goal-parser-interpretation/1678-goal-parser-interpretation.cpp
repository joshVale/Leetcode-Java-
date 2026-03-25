class Solution {
public:
    string interpret(string command) {
        string s ="";
        for(int i = 0; i<command.size();i++){
            if(command[i]=='(' && command[i+1]==')'){
                s+='o';
            }
            else if((command[i]==')' && command[i+1]=='(')){
                continue;
            }
            else{
                s+=command[i];
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]==')'){
                s.erase(i,1);
            }
        }
        return s;
    }
};