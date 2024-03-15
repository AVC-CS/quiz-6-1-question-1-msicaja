
//********************
// Declare Function Prototypes
//********************
#include <iostream>
using namespace std;
int getNextPrime(int);
int getPrevPrime(int);
void getTwoValues(int &, int &);


// ******************************
// Implement all your functions here
// ******************************
void getTwoValues(int &x, int &y) {
    do {
        cin >> x >> y;
    } while (x >= y);
}

int getNextPrime(int i) {
    int j, prime;

    ++i;

    while (1) {
        for (j = 2; j < i; ++j) {
            if (i % j == 0) {
                break;
            }
        }
        if (i == j) {
            prime = i;
            break;
        }
        ++i;
    }

    return prime;
}

int getPrevPrime(int num) {
    int i, j, prime;

    for (i = num; i > 0; ++i) {
        for (j = 0; j < i; ++j) {
            if (i % j == 0) {
                break;
            }
        }
        if (i == j) {
            prime = i;
            break;
        }
    }

    return prime;
}
