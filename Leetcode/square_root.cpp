#include<iostream>
using namespace std;
mysqrt(int n){
int result=0;
for(int i=0;i<=n;i++){
    if(1LL*i*i<=n){             // Using 1LL to handle large numbers
        if(i*i==n){             // Check if i is the exact square root
            return i;           // Return i if it is the exact square root
        }                   
        result=i;         // Update result to the largest i where i*i <= n  
    
    }
    else{
        break;              // If i*i exceeds n, break the loop
    }

}
return result;

}
int main(){
    int n;
    cout << "Enter a number to find its square root: ";
    cin >> n;
    int result = mysqrt(n);
    cout << "The square root of " << n << " is: " << result << endl;
    return 0;
}