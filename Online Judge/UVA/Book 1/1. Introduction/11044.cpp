//
//  11044.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 04/01/19.
//  Copyright © 2019 ITB. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int m, n, t;
    long int sum;
    
    cin >> t;
    
    for (int i=0; i<t; i++) {
        cin >> n >> m;
        n = n - 2;
        m = m - 2;
        
        if(n%3 == 0 && m%3 ==0) {
            sum = (n/3) * (m/3);
        } else if(n%3 == 0) {
            sum = (n/3) * ((m/3)+1);
        } else if(m%3 == 0) {
            sum = ((n/3)+1) * (m/3);
        } else {
            sum = ((n/3)+1) * ((m/3)+1);
        }
        
        cout << sum << endl;
    }
    
    
}
