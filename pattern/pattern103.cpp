#include<iostream>
using namespace std;
void pattern103(int n){
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    cout<<endl;
}

}
int main(){
    int n;
    cout << "Enter a number : ";
    cin>>n;
    pattern103(n);
    return 0;
}