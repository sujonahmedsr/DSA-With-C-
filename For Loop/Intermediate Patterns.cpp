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