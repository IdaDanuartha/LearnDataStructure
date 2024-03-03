//#include <iostream>
//using namespace std;
//
//const int MAX = 5;
//
//int top = -1;
//int data[MAX];
//
//bool isEmpty() {
//    return top < 0;
//}
//
//bool isFull() {
//    return top > MAX-1;
//}
//
//void push(int num) {
//    if(isFull()) {
//        cout << "Stack penuh!" << endl;
//        return;
//    }
//
//    cout << "angka " << num << " berhasil ditambahkan" << endl;
//    top++;
//    data[top] = num;
//}
//
//void pop() {
//    if(isEmpty()) {
//        cout << "Stack masih kosong!" << endl;
//        return;
//    }
//
//    cout << "Data berhasil dihapus" << endl;
//    top--;
//}
//
//int peek() {
//    return data[top];
//}
//
//int main() {
//    push(24);
//    push(10);
//    push(50);
//    push(60);
//    push(5);
//    pop();
//    pop();
//
//    cout << "Data yang paling atas: " << peek() << endl;
//}
