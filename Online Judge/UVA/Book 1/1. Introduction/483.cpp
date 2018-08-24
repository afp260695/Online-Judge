//
//  483.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 24/08/18.
//  Copyright © 2018 ITB. All rights reserved.
//

#include <cstdio>
#include <stack>

using namespace std;

int main(){
    char ch;
    stack<char> s_char;
    
    while((ch = getchar()) != EOF) {
        
        if(ch == '\n' || ch == ' ') {
            
            while (!s_char.empty()) {
                printf("%c", s_char.top());
                s_char.pop();
            }
            
            printf("%c", ch);
        } else {
            s_char.push(ch);
        }
    }
    
    return 0;
}
