//
//  euler4.cpp
//  
//
//  Created by Ameya Khare on 3/3/15.
//
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome (int num) {
    string hello = to_string(num);
    
    for (int i = 0; i < hello.size()/2; i++) {
        if (hello[i] != hello[hello.size()-1-i]) return false;
    }
    
    return true;
}

int main () {
    int largest = 0;
    
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            if (isPalindrome(i*j) && i*j > largest) largest = i*j;
        }
    }
    
    cout << "The largest palindrome is: " << largest << endl;
    
    return 0;
}
