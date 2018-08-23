//
//  272.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 23/08/18.
//  Copyright © 2018 ITB. All rights reserved.
//

#include <cstdio>

int main() {
    char ch;
    bool first = true;
    
    while((ch = getchar()) != EOF) {
        if(ch == '"') {
            if(first) {
                printf("``");
            } else {
                printf("''");
            }
            first = !first;
        } else {
            printf("%c", ch);
        }
    }
    return 0;
}
