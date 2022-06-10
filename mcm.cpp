#include "mcm.h"
#include "mcd.h"

int MCM::mcm() {
    MCD* tempRes = new MCD(a, b);
    return (a*b)/tempRes->mcd2GCD();
}

int MCM::mcmVect() {
    if(vect != nullptr) {
        int tempRes = 0;
        std::vector<int>::iterator it = vect->begin();
        while(vect->size() > 1) {
            a = *it;
            b = *(it + 1);
            tempRes = mcm();
            vect->erase(it, it + 2);
            vect->insert(vect->begin(), tempRes);
        }
    }
}