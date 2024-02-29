#include <iostream>
using namespace std;

const int MAX = 5;

class Library {
private:
    int top;
    string data[MAX];

public:
    Library() {
        top = -1;
    }

    bool isEmpty() {
        return top < 0;
    }

    bool isFull() {
        return top >= MAX-1;
    }

    void push(string book) {
        if(isFull()) {
            cout << "Data Penuh!";
            return;
        }

        cout << "Buku dengan judul'" << book << "' berhasil ditambahkan\n";
        top++;
        data[top] = book;
    }

    void pop() {
        if(isEmpty()) {
            cout << "Data Masih Kosong!\n";
            return;
        }

        cout << "Buku dengan judul '" << data[top] << "' berhasil diambil\n";
        top--;
    }

    void peek() {
        if(isEmpty()) {
            cout << "Data Masih Kosong!\n";
            return;
        }

        cout << data[top] << endl;
    }
};

int main() {
    Library library;

    int pilihan;
    int lanjutkan = true;
    string book;

    while(lanjutkan) {
        cout << "======================\n";
        cout << "Program E-Library\n";
        cout << "======================\n";
        cout << "List Fitur:\n";
        cout << "1. Tampilkan Buku Paling Atas\n";
        cout << "2. Masukkan Buku\n";
        cout << "3. Keluarkan Buku\n";
        cout << "4. Exit\n";
        cout << "Masukkan pilihanmu: ";
        cin >> pilihan;

        switch(pilihan) {
            case 1:
                library.peek();
                break;
            case 2:
                cout << "Masukkan judul buku: ";
                while(getline(cin, book)) {
                    getline(cin, book);
                    break;
                }
                library.push(book);
                break;
            case 3:
                library.pop();
                break;
            case 4:
                lanjutkan = false;
                break;
            default:
                cout << "Pilihan tidak ditemukan";
        }
    }
}