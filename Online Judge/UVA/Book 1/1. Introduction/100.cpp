//
//  100.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 22/08/18.
//  Copyright © 2018 ITB. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<long, long> result;

long get_max(long i, long j);

int main() {
    long i;
    long j;
    
    while(cin >> i >> j) {
        long temp_i = i;
        long temp_j = j;
        
        if(i > j) {
            swap(i,j);
        }
        
        for(long it = i;it<=j;it++) {
            long temp = it;
            long sum = 1;
            
            while(temp > 1) {
                if(temp % 2 == 0) {
                    temp = temp / 2;
                } else {
                    temp = (temp * 3) + 1;
                }
                
                sum++;
                
                if(temp != 1 && result[temp] != 0) {
                    sum = sum + result[temp] - 1;
                    temp = 1;
                }
            }
            
            result[it] = sum;
            
        }
        
        cout << temp_i << " " << temp_j << " " << get_max(i, j) << "\n";
        
    }
    
    return 0;
    
}

long get_max(long i, long j) {
    long max = result[i];
    for (; i <= j; i++) {
        if(max < result[i]) {
            max = result[i];
        }
    }
    
    return max;
}
