//#include<iostream>
//using namespace std;
//
//int main() {
//    int numbers[10] = {65,34,87,10,45,23,10,65,10,125};
//    int find_number = 100;
//
//    bool is_find = false;
//    int i = 0;
//    int counter = 0;
//
//    for(i = 0; i < 10; i++) {
//        if(numbers[i] == find_number) {
//            is_find = true;
//            counter++;
//        }
//    }
//
//    if(is_find) {
//        if(counter > 1) {
//            cout << "angka " << find_number << " ditemukan sebanyak " << counter << endl;
//        } else {
//            cout << "angka " << find_number << " ditemukan pada indeks ke-" << i << endl;
//        }
//    } else {
//        cout << "angka " << find_number << " tidak dapat ditemukan" << endl;
//    }
//}