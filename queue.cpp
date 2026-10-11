//first in first out 
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("krish");
    q.push("dhull");
    q.push("siet");
    cout <<"size before pop"<<q.size()<<endl;
    cout <<"first element "<<q.front()<<endl;
  q.pop();

    cout <<"first element "<<q.front()<<endl;
    return 0;
}