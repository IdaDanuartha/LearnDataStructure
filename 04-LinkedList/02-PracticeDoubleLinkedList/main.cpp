#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

//void tambahDataAwal(Node **head, Node **tail) {
//    Node *nodeBaru = new Node();
//    cout << "Masukkan Angka : ";
//    cin >> nodeBaru->data;
//    nodeBaru->prev = NULL;
//    nodeBaru->next = NULL;
//
//    if(*head == NULL) {
//        (*head) = nodeBaru;
//        (*tail) = nodeBaru;
//
//        cout << "Data berhasil ditambahkan." << endl;
//        return;
//    }
//
//    nodeBaru->next = (*head);
//    (*head)->prev = nodeBaru;
//    (*head) = nodeBaru;
//    cout << "Data berhasil ditambahkan" << endl;
//}
//
//void tambahDataAkhir(Node **head, Node **tail) {
//    Node *nodeBaru = new Node();
//    cout << "Masukkan Angka : ";
//    cin >> nodeBaru->data;
//    nodeBaru->prev = NULL;
//    nodeBaru->next = NULL;
//
//    if(*head == NULL) {
//        (*head) = nodeBaru;
//        (*tail) = nodeBaru;
//
//        cout << "Data berhasil ditambahkan." << endl;
//        return;
//    }
//
//    nodeBaru->next = (*tail);
//    (*tail)->prev = nodeBaru;
//    (*tail) = nodeBaru;
//    cout << "Data berhasil ditambahkan" << endl;
//}

//void tambahData(Node **head, Node **tail) {
//    int choice = 0;
//    while(choice != 1 && choice != 2) {
//        cout << "-- PILIH CARA TAMBAH DATA ---" << endl;
//        cout << "1. Tambah Data di Awal" << endl;
//        cout << "2. Tambah Data di Akhir" << endl;
//        cout << "Masukkan pilihanmu : ";
//        cin >> choice;
//
//        if(choice == 1 || choice == 2) {
//            choice == 1 ? tambahDataAwal(head, tail) : tambahDataAkhir(head, tail);
//        } else {
//            cout << "Pilihan tidak ditemukan." << endl;
//        }
//    }
//}

void tambahData(Node **head, Node **tail) {
    Node *nodeBaru = new Node();
    cout << "Masukkan Angka : ";
    cin >> nodeBaru->data;
    nodeBaru->prev = NULL;
    nodeBaru->next = NULL;

    if(*head == NULL) {
        (*head) = nodeBaru;
        (*tail) = nodeBaru;

        cout << "Data berhasil ditambahkan." << endl;
        return;
    }

    int choice = 0;
    while(choice != 1 && choice != 2) {
        cout << "-- PILIH CARA TAMBAH DATA ---" << endl;
        cout << "1. Tambah Data di Awal" << endl;
        cout << "2. Tambah Data di Akhir" << endl;
        cout << "Masukkan pilihanmu : ";
        cin >> choice;

        if(choice == 1 || choice == 2) {
            if(choice == 1) {
                nodeBaru->next = (*head);
                (*head)->prev = nodeBaru;
                (*head) = nodeBaru;
            } else {
                nodeBaru->prev = (*tail);
                (*tail)->next = nodeBaru;
                (*tail) = nodeBaru;
            }
        } else {
            cout << "Pilihan tidak ditemukan." << endl;
        }
    }
}

void tampilkanData(Node *head, Node *tail) {
    if(head == NULL) {
        cout << "Data masih kosong." << endl;
        return;
    }

    int choice;
    while(choice != 1 && choice != 2) {
        cout << "-- PILIH CARA TAMBAH DATA ---" << endl;
        cout << "1. Data Awal ke Akhir" << endl;
        cout << "2. Data Akhir ke Awal" << endl;
        cout << "Masukkan pilihanmu : ";
        cin >> choice;

        if(choice == 1 || choice == 2) {
            Node *temp = choice == 1 ? head : tail;
            while(temp != NULL) {
                cout << temp->data << " ";
                temp = choice == 1 ? temp->next : temp->prev;
            }
            cout << endl;
        } else {
            cout << "Pilihan tidak ditemukan." << endl;
        }
    }
}

void ubahData(Node **head) {
    if(*head == NULL) {
        cout << "Data masih kosong." << endl;
        return;
    }

    int ubah;
    cout << "Masukkan data yang mau diubah : ";
    cin >> ubah;

    Node *temp = (*head);

    while(temp != NULL) {
        if(temp->data == ubah) {
            cout << "Masukkan data yang baru : ";
            cin >> temp->data;
            cout << "Data berhasil diubah" << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Data tidak ditemukan" << endl;
}

void hapusData(Node **head, Node **tail) {
    if(*head == NULL) {
        cout << "Data masih kosong." << endl;
        return;
    }

    if(*head == *tail) {
        delete (*head);
        (*head) = NULL;
        (*tail) = NULL;
        cout << "Data berhasil dihapus." << endl;
        return;
    }

    int choice = 0;
    while(choice != 1 && choice != 2) {
        cout << "-- PILIH CARA TAMBAH DATA ---" << endl;
        cout << "1. Hapus Data di Awal" << endl;
        cout << "2. Hapus Data di Akhir" << endl;
        cout << "Masukkan pilihanmu : ";
        cin >> choice;

        if(choice == 1 || choice == 2) {
            if(choice == 1) {
                Node *nodeHapus = (*head);
                (*head) = nodeHapus->next;
                (*head)->prev = NULL;
                delete nodeHapus;
            } else {
                Node *nodeHapus = (*tail);
                (*tail) = nodeHapus->prev;
                (*tail)->next = NULL;
                delete nodeHapus;
            }

            cout << "Data Berhasil Dihapus." << endl;
        } else {
            cout << "Pilihan tidak ditemukan." << endl;
        }
    }
}

int main() {
    Node *HEAD = NULL, *TAIL = NULL;
    int choice;

    while(choice != 5) {
        cout << "--- PROGRAM CRUD SEDERHANA DENGAN DOUBLE LINKED LIST ---" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "3. Ubah Data" << endl;
        cout << "4. Hapus Data" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan Pilihanmu : ";
        cin >> choice;

        switch(choice) {
            case 1:
                tambahData(&HEAD, &TAIL);
                break;
            case 2:
                tampilkanData(HEAD, TAIL);
                break;
            case 3:
                ubahData(&HEAD);
                break;
            case 4:
                hapusData(&HEAD, &TAIL);
                break;
            case 5:
                continue;
            default:
                cout << "Pilihan tidak ditemukan." << endl;
        }
    }

}