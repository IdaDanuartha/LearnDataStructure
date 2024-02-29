//#include<iostream>
//using namespace std;
//
//void bubbleSort(int data[], int length) {
//    int temp;
//
//    for(int i = 0; i < length; i++) {
//        for(int j = 0; j < length; j++) {
//            if(data[j] > data[j+1]) {
//                temp = data[j];
//                data[j] = data[j+1];
//                data[j+1] = temp;
//            }
//        }
//    }
//}
//
//int main(){
//    int length;
//
//    cout << "Masukkan jumlah data : ";
//    cin >> length;
//
//    int data[length];
//
//    for(int i = 0; i < length; i++) {
//        cout << "elemen ke-" << i << ": ";
//        cin >> data[i];
//    }
//
//    cout << endl;
//
//    cout << "Data yang belum terurut : " << endl;
//    for(int i = 0; i < length; i++) {
//        cout << data[i] << " ";
//    }
//
//    cout << endl << endl;
//    bubbleSort(data, length);
//
//    cout << "Data yang sudah terurut : " << endl;
//    for(int i = 0; i < length; i++) {
//        cout << data[i] << " ";
//    }
//
//    cout << endl;
//}