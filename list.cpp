#include<iostream>
#include<list>
using namespace std;
using namespace std ;
int main (){
     list <int>l;
     l.push_back(1);
     l.push_back(2);
     for(int i:l){
          cout <<i<<" ";
     }
     cout <<endl;
     l.erase(l.begin());
     cout <<"after erase"<<endl;
     for (int i:l){
          cout <<i<<" ";
     }
     cout <<endl;
     cout <<l.size()<<endl;
     //repeatition of something n times 
     list <int> n (5,500);
     for (int i:n){
          cout <<i<<" ";
     }
return 0;
}
