#include<iostream>
using namespace std;
sum(int n) {
    if(n == 0) {
        return 0;
    }
    return n + sum(n - 1);

}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n < 0) {
        cout << "Sum is not defined for negative numbers." << endl;
    } else {
        int result = sum(n);
        cout << "Sum of first " << n << " natural numbers is " << result << endl;
    }

    return 0;
}