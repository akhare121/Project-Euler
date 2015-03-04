#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

const unsigned long long TARGET = 600851475143;
const unsigned long long TARGET2 = 13195;
vector<long> primes;

bool isPrime (long num) {
    for (auto prime : primes) {
        if (num%prime == 0) return false;
    }
    
    cout << "adding: " << num << endl;
    return true;
}

int main () {
    primes.push_back(2);
    
    for (int i = 3; i <= sqrt(TARGET); i++) {
        if (TARGET%i == 0 && isPrime(i)) primes.push_back(i);
    }
    
    cout << "Largest factor is: " << primes.back() << endl;
    
    return 0;
}
