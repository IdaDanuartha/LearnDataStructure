//#include<iostream>
//using namespace std;
//
//void insertionSort(int data[], int size) {
//    int i, j , key;
//
//    for(i = 1; i < size; i++) {
//        key = data[i];
//        j = i - 1;
//        while(j >= 0 && data[j] > key) {
//            data[j+1] = data[j];
//            j = j - 1;
//        }
//        data[j+1] = key;
//    }
//}
//
//int main() {
//    int data[5] = {54, 12, 100, 56, 20};
//    int size = sizeof(data) / sizeof(*data);
//
//    cout << "Data belum diurutkan: " << endl;
//    for(int i = 0; i < size; i++) {
//        cout << data[i] << " ";
//    }
//    cout << endl << endl;
//
//    insertionSort(data, size);
//
//    cout << "Data sudah diurutkan: " << endl;
//    for(int i = 0; i < size; i++) {
//        cout << data[i] << " ";
//    }
//    cout << endl << endl;
//}