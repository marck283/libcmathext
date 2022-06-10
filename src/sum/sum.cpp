#include "sum.h"
#include <algorithm>

Sum::Sum(int val, int val1 = 0, int val2 = 0) {
    valueA = val;
    valueB = val1;
    target = val2;
}

/**
 * @brief Questa funzione prende in input un valore intero positivo e restituisce la somma di tutti i valori interi
 * positivi dispari compresi tra 1 e quel valore (altrimenti, se il valore in input è nullo, restituisce zero).
 * ATTENZIONE: se il valore in input è negativo o pari a zero, la funzione ritorna -1. Tuttavia, non compie alcun
 * controllo sul verificarsi di una condizione di overflow. Si consiglia, pertanto, di utilizzare la funzione oddIntSum_s().
 * 
 * @param value 
 * @return int 
 */
int Sum::oddIntSum(int value) {
    if(value >= 0) {
        return value*value;
    }
    return -1;
}

/**
 * @brief Questa funzione prende in input un valore intero positivo e restituisce la somma di tutti i valori interi
 * positivi dispari compresi tra 1 e quel valore. ATTENZIONE: se il valore in input è negativo o pari a zero,
 * la funzione ritorna 0. Inoltre, la funzione restituisce NULL se è stato generato un overflow.
 * 
 * @param value 
 * @return int 
 */
int Sum::oddIntSum_s(int value) {
    /* Notare che si sarebbe potuta utilizzare anche la funzione pow() inclusa in cmath, ma, per questioni di velocità di
    scrittura del codice e di performance, è stato preferito l'utilizzo dell'operatore di moltiplicazione. */

    if(value > 0) {
        int prod = value*value;

        if(prod >= 0) {
            return prod;
        }
        return NULL;
    }
    return 0;
}

/**
 * @brief Questa funzione prende in input un valore intero positivo e ritorna la somma di tutti i valori interi positivi pari
 * compresi tra 1 e quel valore. ATTENZIONE: se il valore in input è negativo o pari a zero, la funzione ritorna 0. Tuttavia,
 * non compie alcun controllo sul verificarsi di una condizione di overflow. Si consiglia, pertanto, di utilizzare la funzione
 * evenIntSum_s().
 * 
 * @param value 
 * @return int 
 */
int Sum::evenIntSum(int value) {
    if(value > 0) {
        return value*(value + 1);
    }
    return 0;
}

/**
 * @brief Questa funzione prende in input un valore intero positivo e ritorna la somma di tutti i valori interi positivi pari
 * compresi tra 1 e quel valore. ATTENZIONE: se il valore in input è negativo o pari a zero, la funzione ritorna 0. Inoltre,
 * la funzione restituisce NULL se è stato generato un overflow.
 * 
 * @param value 
 * @return int 
 */
int Sum::evenIntSum_s(int value) {
    if(value > 0) {
        int result = value*(value + 1);

        if(result >= 0) {
            return result; 
        }
        return NULL;
    }
    return 0;
}

/**
 * @brief Funzione wrapper per calcolare la somma dei valori multipli di valueA o valueB (i due valori in input) ed inferiori
 * al valore obiettivo (target). Poiché utilizzata per chiamare un'altra funzione (sumDivisibleBy()), queste devono essere entrambe
 * riportate nel codice del programma. ATTENZIONE: questa funzione non pone alcun controllo sulle condizioni di overflow che si possono
 * generare durante il suo utilizzo.
 * 
 * @param valueA 
 * @param valueB 
 * @param target 
 * @return int 
 */
int Sum::sumMultiples(int valueA, int valueB, int target) {
    return sumDivisibleBy(valueA, target) + sumDivisibleBy(valueB, target) - sumDivisibleBy(valueA*valueB, target);
}

/**
 * @brief Questa funzione è utilizzata per calcolare la somma di tutti i valori pari positivi e multipli del valore dato in
 * input, utilizzando la formula (opportunamente modificata) della somma di Gauss.
 * 
 * @param N 
 * @param target 
 * @return int 
 */
int Sum::sumDivisibleBy(int N, int target) {
    int p = target/N;
    return N*(p*(p + 1))/2;
}

/**
 * @brief Questa funzione calcola la somma delle cifre di valori molto grandi (per questo motivo, in input non può essere inserito un dato di tipo int o sua variante,
 * ma deve essere inserito un dato di tipo "std::string").
 * 
 * @param str 
 * @return unsigned long long int 
 */
unsigned long long int digitSum(std::string str) {
    std::string::iterator it;

    std::reverse(str.begin(), str.end());
    it = str.begin();

    unsigned long long int sum = 0;
    while(*it == '0' || *it == '.') {
        it++;
    }
    
    while(it != str.end()) {
        sum += *it - '0';
        it++;
    }

    return sum;
}