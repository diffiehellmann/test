#include <stdio.h>

int primes[26] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
char charsUpper[26] = {A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z};
char charsLower[26] = {a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z};

convertToPrimeProduct(char string) {
    for ( int k = 0; k < sizeof(string); k++) {
        int listofPrimes[sizeof(String)];
        listofPrimes[k] = primeDict[char[k]ofString];
    }
    int productofPrimes = listofPrimes[0];

    for ( int h = 1; h < sizeof(listofPrimes); h++) {
        productofPrimes *= listofPrimes[h];
    }
    return productofPrimes;
}

int void main() {

    for ( int i = 0; sizeof(list of input words); i++) {

        listofstrings[i] == convertToPrimeProduct(String[i]);
        printf("&String = &productofString\n", &String[i], listofStrings([i]));
    }
    if (productofstring[0] == productofstring[1])
        printf("anagram = true\n");
    return 0;
}
