#include<iostream>
using namespace std;

factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if(n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = factorial(n);
        cout << "Factorial of " << n << " is " << result << endl;
    }
    
    return 0;
}