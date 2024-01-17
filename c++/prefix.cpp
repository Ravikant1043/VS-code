#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int prefix_evaluation(string s){

    stack<int> st;

    /* for prefix we use to traverse the given string from the end
    but for postfix we have to traverse the string from the begining*/
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int o1=st.top();
            st.pop();
            int o2=st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(o1+o2);
                break;
            
            case '-':
                st.push(o1-o2);
                break;

            case '/':
                st.push(o1/o2);
                break;
            
            case '*':
                st.push(o1*o2);
                break;
            
            case '^':
                st.push(o1^o2);
                break;

            default:
                break;
            }
        }
    }
    return st.top();
}
int main(){

    cout<<prefix_evaluation("-+7*45+20")<<endl;
    return 0;
}