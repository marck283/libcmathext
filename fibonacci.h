#ifndef __FIBONACCI_H__
#define __FIBONACCI_H__

#include <iostream>

class Fibonacci {
    private:
    int index;
    
    public:
    explicit Fibonacci(int index) {
        this->index = index;
    }
    int sumEvenFib(int target);
    int binet(int index);
    int binet_s(int index);
};

#endif
