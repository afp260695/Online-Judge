//
//  10703.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 03/01/19.
//  Copyright © 2019 ITB. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    bool field[501][501];
    int W, H, N;
    int X1, Y1, X2, Y2;
    
    cin >> W >> H >> N;
    
    while(W!=0 || H!=0 || N!=0) {
        for(int i=0; i<=500; i++) {
            for(int j=0; j<=500; j++) {
                field[i][j] = false;
            }
        }
        
        for(int k=0; k<N; k++) {
            cin >> X1 >> Y1 >> X2 >> Y2;
            if(X1 > X2) {
                swap(X1, X2);
            }
            
            if(Y1 > Y2) {
                swap(Y1, Y2);
            }
            
            for(int i=X1; i<=X2; i++) {
                for(int j=Y1; j<=Y2; j++) {
                    field[i][j] = true;
                }
            }
            
            
            
        }
        
        int sum = 0;
        for(int i=1; i<=W; i++) {
            for(int j=1; j<=H; j++) {
                if(!field[i][j]) {
                    sum++;
                }
            }
        }
        
        if(sum == 0) {
            cout << "There is no empty spots." << endl;
        } else if(sum == 1) {
            cout << "There is one empty spot." << endl;
        } else {
            cout << "There are "<< sum <<" empty spots." << endl;
        }
        
        cin >> W >> H >> N;
    }
    
    return 0;
}
