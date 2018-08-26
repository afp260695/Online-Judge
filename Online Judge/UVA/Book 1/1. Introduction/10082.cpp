//
//  10082.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 26/08/18.
//  Copyright © 2018 ITB. All rights reserved.
//

#include <cstdio>
#include <string>

using namespace std;

int main() {
    string inp = "1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./";
    string outp = "`1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,.";
    char ch;

    while((ch = getchar()) != EOF) {
        size_t found = inp.find(ch);
        
        if(found != string::npos) {
            printf("%c", outp[found]);
        } else {
            printf("%c", ch);
        }
    }
    
    return 0;
}
