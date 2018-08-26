//
//  941.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 26/08/18.
//  Copyright © 2018 ITB. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long count_factorial(unsigned long n);

int main(){
    long long n;
    cin >> n;
    
    for (long long i = 0; i < n; i++) {
        string sentence;
        long long permutaion_order;
        
        vector<char> input, result;
        
        cin >> sentence;
        cin >> permutaion_order;
        
        for (int j = 0; j < sentence.length(); j++) {
            input.push_back(sentence[j]);
        }
        
        sort(input.begin(), input.end());
        
        while (!input.empty()) {
            long long factorial_value = count_factorial(input.size() - 1);
            long long ind = permutaion_order / factorial_value;
            permutaion_order = permutaion_order % factorial_value;
            
            result.push_back(input[ind]);
            input.erase(input.begin() + ind);
        }
        
        
        
        for (int j = 0; j < result.size(); j++) {
            cout << result[j];
        }
        
        cout << endl;
        
        
    }
    return 0;
}

long long count_factorial(unsigned long n) {
    long long sum = 1;
    
    for (int i = 1; i <= n; i++) {
        sum = sum * i;
    }
    
    return sum;
}
