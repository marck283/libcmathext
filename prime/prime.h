#ifndef __PRIME_H__
#define __PRIME_H__
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

class PrimeNum {
    private:
    int val;
    unsigned long long int num;
    
    public:
    explicit PrimeNum(int val = 0, unsigned long long int num = 0) {
        this->val = val;
        this->num = num;
    }
    
    long long int maxPrimeFactors(long long int n);
    int printPrime(int limit);
    bool isPrime(int value);
    unsigned long long int printPrimeULL(unsigned long long int limit);
    bool isPrimeULL(unsigned long long int value);
};

#endif
