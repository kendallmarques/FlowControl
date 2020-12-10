//
//  main.cpp
//  Lab03_KendallMarques
//
//  Created by Kendall Marques on 9/14/20.
//  Copyright © 2020 Kendall Marques. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    float a;
    float counter = 0;
    float sum = 0;
    float subtract = 0;

    do {
        cout << "The input must be positive:";
        cin >> a;
        
        
    
    } while (a <= 0);
    cout << "This number is positive." << endl;
  
    cout << "I will now find the sum of all values between 0 and " << a << endl;
    
    for (counter = 0; counter <= a; counter++) {
        sum += counter;
        cout << "+" << counter << "=" << sum << endl;
    }
    cout << "The sum of values from 0 to " << a << " is " << sum << endl;
    
    counter = a;
    subtract = sum;
    cout << "Starting with the sum at " << sum << endl;
    
    while(counter >= 0){
        subtract -= counter;
        cout << "After subracting " << counter << ", I got the number " << subtract << "." << endl;
        counter--;
        
    }
    
    
        
    cin.get();
    cin.get();
}
