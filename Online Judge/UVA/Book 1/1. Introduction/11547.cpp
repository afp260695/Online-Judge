//
//  11547.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 07/01/19.
//  Copyright © 2019 ITB. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    long long int n;
    
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> n;
        n = ((((((n*567)/9)+7492)*235)/47))-498;
        cout << (abs(n)%100)/10 << endl;
    }
}
