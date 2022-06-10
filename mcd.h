#ifndef __MCD_H__
#define __MCD_H__

#include <iostream>
#include <vector>

class MCD {
    private:
    long long int a, b;
    std::vector<int>* vect;
    
    public:
    explicit MCD(long long int a, long long int b) {
        this->a = a;
        this->b = b;
        vect = nullptr;
    }
    
    MCD(std::vector<int>* vect = nullptr) {
        if(vect != nullptr) {
            this->vect = new std::vector<int>(vect->size());
            for(int i = 0; i < this->vect->size(); i++) {
                this->vect->at(i) = vect->at(i);
            }
        } else {
            this->vect = nullptr;
        }
    }
    
    MCD(const MCD& mcd) {
        this->a = mcd.a;
        this->b = mcd.b;
        if(mcd.vect == nullptr) {
            vect = nullptr;
        } else {
            vect = new std::vector<int>(mcd.vect->size());
            for(int i = 0; i < vect->size(); i++) {
                vect->at(i) = mcd.vect->at(i);
            }
        }
    }
    
    ~MCD() {
        delete[] vect;
    }
    
    unsigned long long int mcd2GCD();
    unsigned long long int mcd2();
    unsigned long long int mcd();
};

#endif
