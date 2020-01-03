#include<iostream>
using namespace std;

int findDivisor(int x){
    for(int i = 2; i < x ; i++){
        if(x%i==0){
            return i;
        }else{
            ;
        }
    }
}

int main(){
    int x;
    cout<<"Find Divisor : Please Input : ";
    cin>>x;
    cout<<"Output = "<<findDivisor(x);

    return 0;
}
