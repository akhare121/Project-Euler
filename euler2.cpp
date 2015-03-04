#include <iostream>

using namespace std;

const int LIMIT = 4000000;

int main () {
    int first = 1, second = 2;
    int number = first + second, sum = 2;
    
    while (number < LIMIT) {
        if (number%2 == 0)
            sum+=number;
        
        first = second;
        second = number;
        number = first+second;
    }
    
    cout << sum << endl;
    
    return 0;
}