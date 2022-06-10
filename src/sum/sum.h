#ifndef __SUM_H__
#define __SUM_H__

#include <iostream>

class Sum {
    private:
    int valueA, valueB, target;
    
    public:
    explicit Sum(int val, int val1 = 0, int val2 = 0) {
        valueA = val;
        valueB = val1;
        target = val2;
    }
    
    int oddIntSum(int value);
    int oddIntSum_s(int value);
    int evenIntSum(int value);
    int evenIntSum_s(int value);
    int sumMultiples(int valueA, int valueB, int target);
    int sumDivisibleBy(int N, int target);
    unsigned long long int digitSum(std::string str);
};

#endif
