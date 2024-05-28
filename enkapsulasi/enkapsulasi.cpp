#include <iostream>
using namespace std;

class remoteLampu {
private:
    string saklarNo[10];

public:
    void setSaklarNo(int i, string value) {     //set: mengisi nilai saklar
        saklarNo[i] = value;
    }
    string getSaklarNo(int i) {                 //get: mendapatkan nilai saklar. tampilkan string dengan cout
        return saklarNo[i];
    }
};


