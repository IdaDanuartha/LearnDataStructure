#include<iostream>
using namespace std;

void printArray(int data[], int length) {
    cout << "  ";
    for(int i = 0; i < length; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

void sequentialSearch(int data[], int length) {
    int find_number;
    int counter;
    int flag;
    int step_counter;

    cout << endl << "01 - Algoritma Sequential Search" << endl;
    cout << "Array: " << endl;
    printArray(data, length);

    cout << "Input angka yang dicari: ";
    cin >> find_number;

    for(int i = 0; i < length; i++) {
        step_counter++;
        cout << "#Tahap " << step_counter << endl;
        cout << " " << data[i] << " = " << find_number << "?: ";

        if(data[i] == find_number) {
            counter++;
            flag = 1;
            cout << "ya";
        } else {
            cout << "tidak";
        }
        cout << endl;
    }

    if(flag == 1) {
        cout << "angka " << find_number << " ditemukan sebanyak " << counter << " kali" << endl;
    } else {
        cout << "angka " << find_number << " tidak dapat ditemukan";
    }
    cout << "Jumlah Langkah: " << step_counter << endl;
}

void duplicateArray(int data[], int temp_array[], int length) {
    for(int i = 0; i < length; i++) {
        temp_array[i] = data[i];
    }
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int data[], int length) {
    int pos;

    for(int i = 0; i < length - 1; i++) {
        pos = i;
        for(int j = i + 1; j < length; j++) {
            if(data[j] < data[pos]) {
                pos = j;
            }
        }
        if(pos != i) {
            swap(&data[pos], &data[i]);
        }
    }
}

void binarySearch(int data[], int length) {
    int find_number, mid;
    int left = 0;
    int right = length - 1;
    int flag = 0;
    int step_counter = 0;
    int temp_array[length];

    duplicateArray(data, temp_array, length);
    selectionSort(temp_array, length);

    cout << endl << "02 - Algoritma Binary Search" << endl;
    cout << "Array: " << endl;
    printArray(temp_array, length);

    cout << "Input angka yang dicari: ";
    cin >> find_number;

    while(left <= right && flag == 0) {
        step_counter++;
        mid = (left+right) / 2;

        cout << "\n#Tahap " << step_counter << endl;
        cout << " Left: " << left << ", Mid: " << mid << ", Right = " << right << endl;
        cout << " Data Tengah: " << temp_array[mid] << ", Cari: " << find_number << endl;

        for(int i = 0; i < length; i++) {
            cout << " ";
            if(i < left || i > right) {
                cout << "x";
            } else {
                if(i == mid) {
                    cout << "[" << temp_array[mid] << "]";
                } else {
                    cout << temp_array[i];
                }
            }
        } cout << endl;

        if(temp_array[mid] == find_number) {
            flag = 1;
        } else if(find_number < temp_array[mid]) {
            cout << find_number << " < " << temp_array[mid] << ", maka cari di kiri" << endl;
            right = mid - 1;
        } else {
            cout << find_number << " >" << temp_array[mid] << ", maka cari di kanan" << endl;
            left = mid + 1;
        }
    }

    cout << endl;
    if(flag == 1) {
        cout << "angka " << find_number << " dapat ditemukan" << endl;
    } else {
        cout << "angka " << find_number << " tidak dapat ditemukan" << endl;
    }
    cout << "Jumlah Langkah: " << step_counter << endl;
}

void inputArrayElement(int data[], int length) {
    for(int i = 0; i < length; i++) {
        cout << "elemen-" << i << ": ";
        cin >> data[i];
    }
}

int main() {
    int length;
    int data[100];
    int choice;
    int rand_number;
    bool ongoing = true;
    bool need_user_choice = false;

    cout << "Program Menerapkan Algoritma Struktur Data (Searching)" << endl;
    cout << "===========================================" << endl;
    cout << "Masukkan Ukuran Array: ";
    cin >> length;
    data[length];

    inputArrayElement(data, length);

    cout << endl << "Array: " << endl;
    printArray(data, length);

    while(ongoing) {
        need_user_choice = true;
        cout << endl << "===========================================" << endl;
        cout << "1. Sequential Search" << endl;
        cout << "2. Binary Search" << endl;
        cout << "3. Input Ulang Array" << endl;
        cout << "4. Test Searching Dengan Nilai Random" << endl;
        cout << "5. Keluar Dari Program" << endl;

        while(need_user_choice) {
            cout << "Silahkan Pilih (1-5): ";
            cin >> choice;
            need_user_choice = false;

            switch(choice) {
                case 1:
                    sequentialSearch(data, length);
                    break;
                case 2:
                    binarySearch(data, length);
                    break;
                case 3:
                    cout << endl << "03- Array Baru" << endl;
                    cout << "Masukkan Ukuran Array: ";
                    cin >> length;
                    data[length];
                    inputArrayElement(data, length);
                    break;
                case 4:
                    cout << endl << "04 - Test Searching Dengan Nilai Random" << endl;
                    cout << "Masukkan Ukuran Array: ";
                    cin >> length;

                    for(int i =0; i < length; i++) {
                        rand_number = rand() % 100 + 1;
                        data[i] = rand_number;
                    }
                    printArray(data, length);
                    break;
                case 5:
                    cout << endl << "Program Selesai." << endl;
                    ongoing = false;
                    break;
                default:
                    cout << "Menu tidak ditemukan." << endl;
                    need_user_choice = true;
                    break;
            }
        }
    }
}