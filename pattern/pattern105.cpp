#include<iostream>
using namespace std;
void pattern105(int n){

for(int i=0;i<n;i++){
    for(int j=n;j>i;j--){
        cout<<"*";
    }
cout<<endl;
}



}


int main(){
    int n;
    cout << "Enter a number : ";
    cin>>n;
    pattern105(n);
    return 0;
}   