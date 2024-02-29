//#include<iostream>
//using namespace std;
//
//#define max 5
//
//int data[max];
//int head = -1, tail = -1;
//
//bool isEmpty() {
//    return head == -1 && tail == -1;
//}
//
//bool isFull() {
//    return tail == max-1;
//}
//
//void enqueue() {
//    if(isFull()) {
//        cout << "Antrian sudah penuh!" << endl;
//        return;
//    }
//
//    if(isEmpty()) {
//        head = tail = 0;
//        cout << "Masukkan data : ";
//        cin >> data[tail];
//    } else {
//        tail++;
//        cout << "Masukkan data : ";
//        cin >> data[tail];
//    }
//}
//
//void dequeue() {
//    if(isEmpty()) {
//        cout << "Antrian kosong!" << endl;
//        return;
//    }
//
//    cout << "Data yang diambil : " << data[head] << endl;
//    for(int i = head; i <= tail - 1; i++) {
//        data[i] = data[i+1];
//        tail--;
//        if(tail == -1) {
//            head = -1;
//        }
//    }
//}
//
//void clear() {
//    head = tail = -1;
//    cout << "Antrian sudah dikosongkan!" << endl;
//}
//
//void view() {
//    if(isEmpty()) {
//        cout << "Antrian kosong!" << endl;
//        return;
//    }
//
//    for(int i = head; i <= tail; i++) {
//        cout << "Data pada antrian ke-" << i << " = " << data[i] << endl;
//    }
//}
//
//int main() {
//    enqueue();
//    enqueue();
//    enqueue();
//    enqueue();
//    enqueue();
//    enqueue();
//
////    dequeue();
//    view();
////    clear();
////    dequeue();
//}