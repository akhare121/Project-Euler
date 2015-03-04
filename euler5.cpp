//
//  euler5.cpp
//  
//
//  Created by Ameya Khare on 3/3/15.
//
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main () {
    long num = 2;
    long found = 0;
    
    while (!found) {
        for (int i = 2; i <= 21; i++) {
            if (i == 21) found = num;
            else if (num%i != 0 || (num/i)%2 != 0) break;
        }
        
        num+=2;
        
        cout << "On number: " << num << endl;
    }
    
    cout << "The smallest number is: " << found << endl;
    
    return 0;
}