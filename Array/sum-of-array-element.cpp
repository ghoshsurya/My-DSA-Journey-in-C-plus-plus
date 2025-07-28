#include<iostream>
using namespace std;
int main(){

int n;
cout << "Enter array size: ";
cin >> n;
int arr[n];
cout << "Enter array elements: ";
int sum=0;
for(int i=0;i<n;i++){
cout << "Element " << i + 1 <<" is"<< ": ";
    cin >> arr[i];
    sum += arr[i];
   
}
 cout<<"Sum of array elements"  << " is: " << sum << endl;

    return 0;
}