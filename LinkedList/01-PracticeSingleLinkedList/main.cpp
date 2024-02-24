//#include<iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node *next;
//};
//
//void hapusData(Node **head) {
//    if(*head == NULL) {
//        cout << "Data masih kosong." << endl;
//        return;
//    }
//
//    if((*head)->next == NULL) {
//        *head = NULL;
//        cout << "Node berhasil dihapus" << endl;
//        return;
//    }
//
//    Node *temp = (*head);
//
//    while(temp->next->next != NULL) {
//        temp = temp->next;
//    }
//
//    temp->next = NULL;
//    cout << "Node berhasil dihapus." << endl;
//}
//
//void ubahData(Node **head) {
//    if(*head == NULL) {
//        cout << "Data masih kosong." << endl;
//        return;
//    }
//
//    int ubah;
//
//    cout << "Masukkan data yang mau diubah : ";
//    cin >> ubah;
//
//    Node *temp = (*head);
//
//    while(temp != NULL) {
//        if(temp->data == ubah) {
//            cout << "Masukkan data yang baru : ";
//            cin >> temp->data;
//            cout << "Data berhasil diubah." << endl;
//            return;
//        }
//        temp = temp->next;
//    }
//    cout << "Data tidak ditemukan." << endl;
//}
//
//void tampilkanData(Node *head) {
//    Node *temp = head;
//
//    if(temp == NULL) {
//        cout << "Data masih kosong." << endl;
//        return;
//    }
//
//    while(temp != NULL) {
//        cout << temp->data << " ";
//        temp = temp->next;
//    }
//    cout << endl;
//}
//
//void tambahData(Node **head) {
//    Node *nodeBaru = new Node();
//
//    cout << "Masukkan Angka : ";
//    cin >> nodeBaru->data;
//    nodeBaru->next = NULL;
//
//    if(*head == NULL) {
//        (*head) = nodeBaru;
//        return;
//    }
//
//    Node *temp = (*head);
//
//    while(temp->next != NULL) {
//        temp = temp->next;
//    }
//
//    temp->next = nodeBaru;
//}
//
//int main() {
//    Node *HEAD = NULL;
//
//    int choice;
//
//    while(choice != 5) {
//        cout << "--- PROGRAM CRUD SEDERHANA DENGAN LINKED LIST ---" << endl;
//        cout << "1. Tambah Data" << endl;
//        cout << "2. Ubah Data" << endl;
//        cout << "3. Tampilkan Data" << endl;
//        cout << "4. Hapus Data" << endl;
//        cout << "5. Keluar" << endl;
//        cout << "Masukkan Pilihan : "; cin >> choice;
//
//        switch(choice) {
//            case 1:
//                tambahData(&HEAD);
//                break;
//            case 2:
//                ubahData(&HEAD);
//                break;
//            case 3:
//                tampilkanData(HEAD);
//                break;
//            case 4:
//                hapusData(&HEAD);
//                break;
//            case 5:
//                continue;
//            default:
//                cout << "Pilihan Tidak Ditemukan." << endl;
//        }
//    }
//}