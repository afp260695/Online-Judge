//
//  10921.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 04/01/19.
//  Copyright © 2019 ITB. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    string sentence;
    char dic[255];
    dic['A'] = '2';
    dic['B'] = '2';
    dic['C'] = '2';
    dic['D'] = '3';
    dic['E'] = '3';
    dic['F'] = '3';
    dic['G'] = '4';
    dic['H'] = '4';
    dic['I'] = '4';
    dic['J'] = '5';
    dic['K'] = '5';
    dic['L'] = '5';
    dic['M'] = '6';
    dic['N'] = '6';
    dic['O'] = '6';
    dic['P'] = '7';
    dic['Q'] = '7';
    dic['R'] = '7';
    dic['S'] = '7';
    dic['T'] = '8';
    dic['U'] = '8';
    dic['V'] = '8';
    dic['W'] = '9';
    dic['X'] = '9';
    dic['Y'] = '9';
    dic['Z'] = '9';
    dic['-'] = '-';
    
    while (cin >> sentence) {
        for (int i=0; i<sentence.length(); i++) {
            if(sentence[i]>='0' && sentence[i]<='9'){
                cout << sentence[i];
            } else{
                cout << dic[sentence[i]];
            }
            
        }
        
        cout << endl;
    }
    
    cout << endl;
    
    return 0;
}
