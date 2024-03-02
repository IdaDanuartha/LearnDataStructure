#include<iostream>
using namespace std;

struct Tree {
    char data;
    Tree *kiri;
    Tree *kanan;
};

Tree *akar = NULL;

void insert(Tree **akar, char data) {
    if((*akar) == NULL) {
        Tree *baru = new Tree;
        baru->data = data;
        baru->kiri = NULL;
        baru->kanan = NULL;
        (*akar) = baru;
    }
}

void preOrder(Tree *akar) {
    if(akar != NULL) {
        cout << akar->data << " ";
        preOrder(akar->kiri);
        preOrder(akar->kanan);
    }
}

void inOrder(Tree *akar) {
    if(akar != NULL) {
        preOrder(akar->kiri);
        cout << akar->data << " ";
        preOrder(akar->kanan);
    }
}

void postOrder(Tree *akar) {
    if(akar != NULL) {
        preOrder(akar->kiri);
        preOrder(akar->kanan);
        cout << akar->data << " ";
    }
}

int main() {
    insert(&akar, 'A');
    insert(&(akar->kiri), 'B');
    insert(&(akar->kanan), 'C');
    insert(&(akar->kiri->kiri), 'D');
    insert(&(akar->kiri->kanan), 'E');
    insert(&(akar->kanan->kiri), 'F');
    insert(&(akar->kanan->kanan), 'G');

    cout << endl << endl;

    cout << "Tampilan PreOrder: ";
    preOrder(akar);

    cout << "\nTampilan InOrder: ";
    inOrder(akar);

    cout << "\nTampilan PostOrder: ";
    postOrder(akar);

    cout << endl << endl;
}