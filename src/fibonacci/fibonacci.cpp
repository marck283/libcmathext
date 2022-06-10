#define _USE_MATH_DEFINES

#include "fibonacci.h"
#include <cmath>

/**
 * @brief Questa funzione calcola la somma di tutti i numeri pari di Fibonacci che non superino il valore dato in input.
 * ATTENZIONE: questa funzione non pone alcun controllo sulla rappresentabilità dei valori (quindi, in particolare, quello
 * obiettivo), pertanto è possibile che si verifichi una condizione di overflow.
 * 
 * @param target 
 * @return int 
 */
int Fibonacci::sumEvenFib(int target) {
    unsigned int sum = 0, temp, nuovo = 1, old = 1;
    
    temp = nuovo + old;
    while(nuovo <= target) {
        sum += temp;
        nuovo = old + temp;
        old = temp + nuovo;
        temp = nuovo + old;
    }

    return sum;
}

/**
 * @brief Questa funzione calcola l'index-esimo valore della successione di Fibonacci.
 * 
 * @param index 
 * @return int 
 */
int Fibonacci::binet(int index) {
    const double phi = (1 + sqrt(5))/2.0;
    return (pow(phi, index) - pow(1 - phi, index))/sqrt(5);
}

/**
 * @brief Questa funzione è la variante "sicura" (cioè con controllo del segno dell'input) della funzione binet(), utilizzata per il calcolo dell'index-esimo valore della
 * successione di Fibonacci. COMMENTO: questa funzione è particolarmente consigliata nel caso della programmazione dinamica.
 * 
 * @param index 
 * @return int 
 */
int Fibonacci::binet_s(int index) {
    if(index > 0) {
        return binet(index);
    }
    return 0;
}