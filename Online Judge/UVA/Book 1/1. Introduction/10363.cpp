//
//  10363.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 27/08/18.
//  Copyright © 2018 ITB. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    string temp[3];
    
    for (int i = 0; i < n; i++) {
        int count_x = 0;
        int count_o = 0;
        
        cin >> temp[0] >> temp[1] >> temp[2];
        
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if(temp[j][k] == 'X') {
                    count_x++;
                } else if(temp[j][k] == 'O') {
                    count_o++;
                }
            }
        }
        
        if(count_x - count_o <= 1 && count_x - count_o >= 0) {
            bool x_win = false;
            bool o_win = false;
            
            for (int j = 0; j < 3; j++) {
                if(temp[j].compare("XXX") == 0) {
                    x_win = true;
                } else if(temp[j].compare("OOO") == 0){
                    o_win = true;
                }
            }
            
            for (int j = 0; j < 3; j++) {
                if(temp[0][j] == 'X' && temp[1][j] == 'X' && temp[2][j] == 'X') {
                    x_win = true;
                } else if(temp[0][j] == 'O' && temp[1][j] == 'O' && temp[2][j] == 'O') {
                    o_win = true;
                }
            }
            
            if(temp[0][0] == 'X' && temp[1][1] == 'X' && temp[2][2] == 'X') {
                x_win = true;
            } else if(temp[0][0] == 'O' && temp[1][1] == 'O' && temp[2][2] == 'O') {
                o_win = true;
            }
            
            if(temp[2][0] == 'X' && temp[1][1] == 'X' && temp[0][2] == 'X') {
                x_win = true;
            } else if(temp[2][0] == 'O' && temp[1][1] == 'O' && temp[0][2] == 'O') {
                o_win = true;
            }
            
            if ((x_win && o_win) || ((count_x != count_o) && o_win) || ((count_x == count_o) && x_win)) {
                cout << "no" << endl;
            } else {
                cout << "yes" << endl;
            }
            
        } else {
            cout << "no" << endl;
        }
        
        
    }
    
    return 0;
}
