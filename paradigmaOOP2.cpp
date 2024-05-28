#include <iostream>
using namespace std;

//polymorphi: untuk memberikan kemampuan dan function

class seseorang {
public:
    virtual void pesan() = 0;
    // virtual void pesan() {
    //    cout << "Pesan dari seseorang" << endl;
    // }
};

class joko : public seseorang {
public:
    // deklarasi
    void pesan() {
        // implementasi
        cout << "Pesan dari joko" << endl;
    }
};

