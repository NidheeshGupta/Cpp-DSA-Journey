#include <iostream>
using namespace std;
int main(){
    for(int i=1; i<=9;i++){
        if(i<=5){
            for(int j=1;j<=i;j++){
                cout<<"#";
            }
            cout<<"\n";
        }
        else{
            for(int k=1;k<=10-i;k++){
                cout<<"#";
            }
            cout<<"\n";
        }
    }
}