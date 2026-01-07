#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;

    // 1️⃣ Square Star Pattern
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }

    // 2️⃣ Right Triangle Star
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            cout << "*";
        }
        cout << endl;
    }

    // 3️⃣ Number Triangle
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            cout << j + 1 << " ";
        }
        cout << endl;
    }

    // 4️⃣ Same Number Pattern
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}