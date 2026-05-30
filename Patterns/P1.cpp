
#include <iostream>
using namespace std;
int main(){
    for (int i=5;i>=1;i--){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int k=1;k<=11-(2*i);k++){
            cout<<"#";
        }
        cout<<"\n";
    }
    for (int p=1;p<=5;p++){
        for(int q=1;q<p;q++){
            cout<<" ";
        }
        for(int r=1;r<=11-(2*p);r++){
            cout<<"#";
        }
        cout<<"\n";
    }
}