#ifndef __GAUSS_H__
#define __GAUSS_H__

#include <iostream>

class Gauss {
    private:
    long long int value;
    
    public:
    explicit Gauss(long long int val) {
        value = val;
    }
    
    long long int gaussSum(long long int value);
    long long int gaussSum_s(long long int value);
};

#endif
