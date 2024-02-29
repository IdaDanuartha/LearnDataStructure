//#include<iostream>
//using namespace std;
//
//void selectionSort(int data[], int size) {
//    for(int i = 0; i < size - 1; ++i) {
//        int min_index = i;
//        for(int j = i + 1; j < size; ++j) {
//            if(data[j] < data[min_index]) {
//                min_index = j;
//            }
//        }
//
//        int temp = data[i];
//        data[i] = data[min_index];
//        data[min_index] = temp;
//    }
//}
//
//int main() {
//    int data[10] = {54,23,7,100,154, 20, 10, 47, 23, 75};
//    int size = sizeof(data) / sizeof(*data);
//
//    cout << "Data yang belum diurutkan: " << endl;
//    for(int i = 0; i < size; i++) {
//        cout << data[i] << " ";
//    }
//    cout << endl << endl;
//
//    selectionSort(data, size);
//
//    cout << "Data yang sudah diurutkan: " << endl;
//    for(int i = 0; i < size; i++) {
//        cout << data[i] << " ";
//    }
//    cout << endl << endl;
//}