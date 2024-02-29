#include<iostream>
using namespace std;

void showData(int array[], int arrayLength, int left, int mid, int right) {
    for(int i = 0; i < arrayLength; i++) {
        cout << " ";
        if((i < left) or (i > right)) {
            cout << "x";
        } else {
            if(i == mid) {
                cout << "[" << array[i] << "]";
            } else {
                cout << array[i];
            }
        }
    }
    cout << endl;
}
void binarySearch(int array[], int arrayLength, int find_number) {
    int mid;
    int left = 0;
    int right = arrayLength - 1;
    int is_find = 0;
    int stepCounter = 0;

    while( (left <= right) && (is_find == 0) ) {
        stepCounter++;
        mid = (left + right) / 2;
        cout << "\nTahap " << stepCounter << endl;
        cout << " Left : " << left << ", Mid : " << mid << ", Right : " << right << endl;
        cout << " Data Tengah : " << array[mid] << ", Cari = " << find_number << endl;

        showData(array, arrayLength, left, mid, right);

        if(array[mid] == find_number) {
            is_find = 1;
        } else if(find_number < array[mid]) {
            cout << find_number << " < " << array[mid] << ", maka cari di kiri" << endl;
            right = mid - 1;
        } else {
            cout << find_number << " > " << array[mid] << ", maka cari di kanan" << endl;
            left = mid + 1;
        }
    }

    cout << endl;
    if(is_find) {
        cout << "Angka " << find_number << " dapat ditemukan" << endl;
    } else {
        cout << "Angka " << find_number << " tidak dapat ditemukan" << endl;
    }

    cout << "Jumlah langkah : " << stepCounter << endl;
}

int main() {
    int n = 7;
    int data[7] = {2,6,8,15,18,25,30};
    int find_number = 50;

    binarySearch(data, n, find_number);
}