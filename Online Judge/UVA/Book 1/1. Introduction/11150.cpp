//
//  11150.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 05/01/19.
//  Copyright © 2019 ITB. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    int N;
    
    
    while(cin >> N) {
        int sum = 0;
        int empty = 0;
        while(N != 0) {
            sum = sum + N;
            empty = N+empty;
            N = empty/3;
            empty = empty - (N * 3);
            
            
            
        }
        
        if(empty >=2){
            sum++;
        }
        
        
        cout << sum << endl;
    }
    
    return 0;
}
