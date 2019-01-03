//
//  10812.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 03/01/19.
//  Copyright © 2019 ITB. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    long long int N, s, d, a, b;
    cin >> N;
    
    for (long long int i=0; i<N; i++) {
        cin >> s >> d;
        a = (s + d) / 2;
        b = (s - d) / 2;
        
        if(b < 0 || (a+b) != s || (a-b) != d) {
            cout << "impossible" << endl;
        } else {
            cout << a << " " << b << endl;
        }
        
    }
    return 0;
}
