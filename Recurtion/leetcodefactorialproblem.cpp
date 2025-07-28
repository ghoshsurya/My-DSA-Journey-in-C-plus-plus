#include<iostream>
using namespace std;
factorial(int n) {
 if(n==0){
return 0;
 }
 if(n==1) {
    return 1;
 }
 int previus2=0;
 int previous1=1;
 int current;

for(int i=2;i<=n;i++){
    current= previous1 + previus2;
    previus2=previous1;
    previous1=current;
}

return current;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin >> n;
    int result = factorial(n);
    cout << "Factorial of " << n << " is " << result<< endl;
    return 0;

}