#include <iostream>
#include <cmath>

using namespace std;

const unsigned long long TARGET = 600851475143;

int main () {
    long fac = 0;
    
    for (int i = 1; i < TARGET; i++) {
        if (isPrime(i)) fac = i;
    }
}

bool isPrime (long num) {
    for (int i = 2; i < num/2; i++) {
        if (num%i == 0) return false
    }
            
    return true;
}
