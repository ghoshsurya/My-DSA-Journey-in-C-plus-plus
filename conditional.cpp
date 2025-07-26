#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin>> n;
    if (n<18){
        cout<<"You are not eligible to vote."<<endl;
    }
    else if (n>=18 && n<60){
        cout<<"You are eligible to vote."<<endl;
    }
    else {
        cout<<"You are a senior citizen."<<endl;
    }
    return 0;
}