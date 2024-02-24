#include<iostream>
using namespace std;

int main() {
    string friend_names[2][3];
    int row = sizeof(friend_names) / sizeof(friend_names[0]);
    int column = sizeof(friend_names[0]) / sizeof(friend_names[0][0]);

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            cout << "Angka [" << i << "][" << j << "] = ";
            cin >> friend_names[i][j];
        }
        cout << endl;
    }

    cout << "-------------- DATA YANG DIINPUTKAN --------------" << endl;

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            cout << "Angka [" << i << "][" << j << "] = " << friend_names[i][j];
            cout << endl;
        }
        cout << endl;
    }
}