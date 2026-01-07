#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter your number: ";
    cin >> n;

    // 5️⃣ Inverted Star Triangle
    for(int i = 0; i < n; i++){
        for(int j = n + 1; j > i + 1; j--){
            cout << "*" << " ";
        }
        cout << endl;
    }

    // 6️⃣ Pyramid Star Pattern
    for(int i = 0; i < n; i++){
        // space 
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        
        // star 
        for(int j = 0 ; j < i + 1; j++ ){
            cout << "* ";
        }
        
        cout << endl;
    }

    // and the number pyramid 
    for(int i = 0; i < n; i++){
        // space 
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        
        // num 1 
        for(int j = 0 ; j < i + 1; j++ ){
            cout << j + 1;
        }
        
        // num 2
        for(int j = i; j > 0; j--){
            cout << j;
        }
        
        cout << endl;
    }

    // 7️⃣ Reverse Number Pattern
    for(int i = 0; i < n; i++){
        int num = 1;
        for(int j = n + 1; j > i + 1; j--){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    // 8️⃣ Floyd’s Triangle
    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}