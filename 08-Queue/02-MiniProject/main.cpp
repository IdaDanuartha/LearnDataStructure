#include<iostream>
using namespace std;

struct Antrian {
    int nomor;
    string nama;
    Antrian *next;
} *head, *newNode, *temporaryNode, *currentNode, *tail;

bool isEmpty(){
    return head == NULL;
}

void enqueue(Antrian *newNode) {
    if(isEmpty()) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }

    cout << "Nomor antrian " << newNode->nomor << " atas nama " << newNode->nama << " berhasil ditambahkan." << endl;
}

void dequeue() {
    if(isEmpty()) {
        cout << "Antrian kosong." << endl;
    } else {
        currentNode = head;
        cout << "Nomor antrian " << currentNode->nomor << " atas nama " << currentNode->nama << " sudah keluar." << endl;
        head = head->next;
    }
}

void antrianBaru(int nomor) {
    string nama;

    cout << "Masukkan nama pasien : ";
    cin >> nama;

    newNode = new Antrian();
    newNode->nomor = nomor;
    newNode->nama = nama;
    newNode->next = NULL;

    enqueue(newNode);
}

void cetakAntrian() {
    cout << "======================" << endl;
    cout << "PROGRAM ANTRIAN DOKTER" << endl;
    cout << "======================" << endl;

    if(isEmpty()) {
        cout << "Antrian kosong." << endl;
    } else {
        currentNode = head;
        cout << "No.  Nama" << endl;
        while(currentNode != NULL) {
            cout << currentNode->nomor << ".  " << currentNode->nama << endl;
            currentNode = currentNode->next;
        }
    }
}

void clear() {
    currentNode = head;
    while(currentNode != NULL) {
        temporaryNode = currentNode;
        temporaryNode->next = NULL;
        currentNode = currentNode->next;
    }
    head = NULL;
    temporaryNode = NULL;

    cout << "Antrian telah dihapus." << endl;
}

int main() {
    head = tail = NULL;
    char pilihan;
    bool lanjutkan = true;
    int nomor = 1;

    while(lanjutkan) {
        cout << endl;
        cout << "======================" << endl;
        cout << "PROGRAM ANTRIAN DOKTER" << endl;
        cout << "======================" << endl;
        cout << "1. Tambah Antrian Baru\n";
        cout << "2. Panggil Antrian\n";
        cout << "3. Tampilkan Antrian\n";
        cout << "4. Hapus dan Reset Antrian\n";
        cout << "5. EXIT\n";
        cout << "Masukkan Pilihan [1-5] : ";
        cin >> pilihan;

        switch (pilihan) {
            case '1':
                antrianBaru(nomor);
                nomor++;
                break;
            case '2':
                dequeue();
                break;
            case '3':
                cetakAntrian();
                break;
            case '4':
                clear();
                nomor = 1;
                break;
            case '5':
                cout << "Program selesai." << endl;
                lanjutkan = false;
                break;
            default:
                cout << "Menu tidak ditemukan." << endl;
        }
    }
}