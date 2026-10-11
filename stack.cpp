//ye sadhi me rakkhi plates ki tarah hai
#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<string>s;
s.push("krish");
s.push("dhull");
s.push("siet");
cout <<"top element "<<s.top()<<endl;
s.pop();
cout <<"now top element is"<<s.top()<<endl;
cout <<"size of stack is "<<s.size()<<endl;
cout <<"empty or non empty"<<s.empty()<<endl;
/*for (int i:s){
    cout <<i<<" ";        this is not work in case of string why?????????
}*/

return 0;
}
