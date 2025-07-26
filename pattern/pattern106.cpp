#include<iostream>
using namespace std;
void pattern106(int n){

for(int i=0;i<n;i++){
    for(int j=n;j>i;j--){
        cout<<n-j+1<<" ";

    }
    cout<<endl;
}

}
int main(){
    int n;
    cout<<"Enter a number to print pattern : ";
    cin >> n;
    pattern106(n);
    return 0;
}