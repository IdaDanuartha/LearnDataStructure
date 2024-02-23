#include<iostream>
using namespace std;

int main() {
    char alphabets[5] = {'A', 'B', 'C', 'D', 'E'};
    int size = sizeof(alphabets) / sizeof(*alphabets);

    char *curr_alphabet = &alphabets[0];

    for(int i = 0; i < size; i++) {
        cout << "Alfabet awal : " << *curr_alphabet << endl;
        cout << "NEXT >>";
        getchar();
        curr_alphabet++;
    }

    cout << "-- PROGRAM SELESAI";
}