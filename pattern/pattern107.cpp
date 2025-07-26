#include<iostream>
using namespace std;
void pattern107(int n){
//outer loop for rows
for(int i=0;i<n;i++){

//lpoop for spaces
for(int j=0;j<n-i+1;j++){
    cout<<" "; 
}

//loop for stars
for(int j=0;j<2*i+1;j++){
    cout<<"*";
}

//loops for spaces
for(int j=0;j<n-i-1;j++){
    cout<<" ";
}

cout<<endl;
}

}

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin>>n;
    pattern107(n);
    return 0;
}