#ifndef __MCM_H__
#define __MCM_H__

#include <iostream>
#include <vector>

class MCM {
    private:
    int a, b;
    std::vector<int>* vect;
    
    void createVect(std::vector<int>* vect) {
        if(vect != nullptr) {
            this->vect = new std::vector<int>(vect->size());
            for(int i = 0; i < vect->size(); i++) {
                this->vect->at(i) = vect->at(i);
            }
        } else {
            this->vect = nullptr;
        }
    }
    
    public:    
    MCM(int a, int b) {
        this->a = a;
        this->b = b;
        createVect(nullptr);
    }
    
    MCM(std::vector<int>* vect) {
        a = -1;
        b = -1;
        createVect(vect);
    }
    
    MCM(const MCM& mcm) {
        a = mcm.a;
        b = mcm.b;
        createVect(mcm.vect);
    }
    
    int mcm();
    int mcmVect();
};

#endif
