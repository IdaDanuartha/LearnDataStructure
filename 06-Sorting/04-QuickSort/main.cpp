#include <iostream>
using namespace std;

void quickSort(int data[], int left, int right) {
    int i = left, j = right;
    int pivot = data[(left+right) / 2];

    while(i <= j) {
        while(data[i] < pivot) i++;
        while(data[j] > pivot) j--;

        if(i <= j) {
            swap(data[i], data[j]);
            i++;
            j--;
        }
    }

    if(left < j) {
        quickSort(data, left, j);
    }

    if(i < right) {
        quickSort(data, i, right);
    }
}

int main() {
    int data[10] = {76,23,12,98,103,54,10,20,5,90};
    int size = sizeof(data) / sizeof(*data);

    cout << "Data sebelum diurutkan: " << endl;
    for(int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl << endl;

    quickSort(data, 0, size-1);

    cout << "Data setelah diurutkan: " << endl;
    for(int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl << endl;
}
