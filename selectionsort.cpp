#include <iostream>
using namespace std;
int main (){
    int arr[5]={1,3,2,4,5};
    for (int i=0 ; i<4 ; i++){
        int min_index = i;
        for (int j= i+1 ; j<5 ; j++){
            if (arr[min_index]> arr[j]){
              min_index=j;
             
            }
            
        }
         swap(arr[i],arr[min_index]);
    }
    for (int i = 0;  i<5 ;i++){
        cout <<arr[i]<<" ";
    }
}