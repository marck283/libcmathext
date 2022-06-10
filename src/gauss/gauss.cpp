#include "gauss.h"

/**
 * @brief Questa funzione prende in input un valore intero positivo e restituisce la somma di tutti i valori interi positivi
 * compresi tra 1 e quel valore (incluso). Questa implementazione è più vantaggiosa rispetto al calcolo classico della somma di
 * questi valori positivi, in quanto non richiede che vengano eseguite più di tre operazioni. ATTENZIONE: se il valore in input è
 * negativo, la funzione ritorna -1.
 * 
 * @param value 
 * @return long long int 
 */
long long int Gauss::gaussSum(long long int value) {
    if(value >= 0) {
        return value*(value + 1)/2;
    }
    return -1;
}

/**
 * @brief Questa funzione prende in input un valore intero positivo e restituisce la somma di tutti i valori interi positivi
 * compresi tra 1 e quel valore (incluso). Questa implementazione è più vantaggiosa rispetto al calcolo classico della somma di
 * questi valori positivi, in quanto non richiede che vengano eseguite più di tre operazioni. ATTENZIONE: se il valore in input è
 * negativo, la funzione ritorna -1. Inoltre, la funzione restituisce NULL se è stato generato un overflow.
 * 
 * @param value 
 * @return long long int 
 */
long long int Gauss::gaussSum_s(long long int value) {
    if(value >= 0) {
        int sum = value*(value + 1)/2;

        if(sum >= 0) {
            return sum;
        }
        return NULL;
    }
    return -1;
}