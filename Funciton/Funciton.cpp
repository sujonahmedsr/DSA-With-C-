#include <iostream>
using namespace std;

// Calculate sum of numbers from 1 to using function

int sumOfM(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int n;
    cout << "Your your number: ";
    cin >> n;
    cout << "Sum of your number is: " << sumOfM(n) << endl;
    return 0;
}