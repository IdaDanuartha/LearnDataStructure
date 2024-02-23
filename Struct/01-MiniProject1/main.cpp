#include<iostream>
using namespace std;

typedef struct AddressDetail {
    char *details;
} adrDetail;

typedef struct Address {
    char *province;
    struct AddressDetail adrDetail;

} address;
typedef struct MySelf {
    char *name;
    int age;
    bool status;
    struct Address address;
} mySelf;

void setData(struct MySelf mySelf) {
    mySelf.name = "Danuartha";
    mySelf.age = 19;
    mySelf.status = false;
    mySelf.address.province = "Bali";
    mySelf.address.adrDetail.details = "Jln. Cempaka Asri, Blok JJ No. 99";
}

void showInformation(struct MySelf mySelf) {
    cout << "-- MY PERSONAL INFORMATION --" << endl;
    cout << mySelf.name << endl;
    cout << mySelf.age << endl;
    cout << mySelf.status << endl << endl;

    cout << mySelf.address.province << endl << endl;

    cout << mySelf.address.adrDetail.details << endl;
}

int main() {
    mySelf self;

    self.name = "Danuartha";
    self.age = 19;
    self.status = false;
    self.address.province = "Bali";
    self.address.adrDetail.details = "Jln. Cempaka Asri, Blok JJ No. 99";

    showInformation(self);
}