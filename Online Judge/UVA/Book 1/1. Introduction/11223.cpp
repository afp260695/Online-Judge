//
//  11223.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 05/01/19.
//  Copyright © 2019 ITB. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <map>
#include <sstream>
#include <string>

using namespace std;

int main(){
    map<string, char> dic;
    int T;
    char temp;
    stringstream ss;
    int count_space;
    
    dic[".-"] = 'A';
    dic["-..."] = 'B';
    dic["-.-."] = 'C';
    dic["-.."] = 'D';
    dic["."] = 'E';
    dic["..-."] = 'F';
    dic["--."] = 'G';
    dic["...."] = 'H';
    dic[".."] = 'I';
    dic[".---"] = 'J';
    dic["-.-"] = 'K';
    dic[".-.."] = 'L';
    dic["--"] = 'M';
    dic["-."] = 'N';
    dic["---"] = 'O';
    dic[".--."] = 'P';
    dic["--.-"] = 'Q';
    dic[".-."] = 'R';
    dic["..."] = 'S';
    dic["-"] = 'T';
    dic["..-"] = 'U';
    dic["...-"] = 'V';
    dic[".--"] = 'W';
    dic["-..-"] = 'X';
    dic["-.--"] = 'Y';
    dic["--.."] = 'Z';
    dic["-----"] = '0';
    dic[".----"] = '1';
    dic["..---"] = '2';
    dic["...--"] = '3';
    dic["....-"] = '4';
    dic["....."] = '5';
    dic["-...."] = '6';
    dic["--..."] = '7';
    dic["---.."] = '8';
    dic["----."] = '9';
    dic[".-.-.-"] = '.';
    dic["--..--"] = ',';
    dic["..--.."] = '?';
    dic[".----."] = '\'';
    dic["-.-.--"] = '!';
    dic["-..-."] = '/';
    dic["-.--."] = '(';
    dic["-.--.-"] = ')';
    dic[".-..."] = '&';
    dic["---..."] = ':';
    dic["-.-.-."] = ';';
    dic["-...-"] = '=';
    dic[".-.-."] = '+';
    dic["-....-"] = '-';
    dic["..--.-"] = '_';
    dic[".-..-."] = '"';
    dic[".--.-."] = '@';
    
    cin >> T;
    getchar();
    
    for (int i=1; i<=T; i++) {
        cout << "Message #" << i << endl;
        ss.str("");
        count_space = 0;
        do{
            temp = getchar();
            if(temp == ' ') {
                count_space++;
                if(count_space == 1 && !ss.str().empty()) {
                    cout << dic[ss.str()];
                    ss.str("");
                } else {
                    cout << " ";
                    count_space = 0;
                }
            } else if(temp == '-' || temp == '.') {
                ss << temp;
                count_space = 0;
            }
        }while(temp != '\n');
        
        if(!ss.str().empty()){
            cout << dic[ss.str()];
        }
        
        cout << endl;
        
        if(i != T) {
            cout << endl;
        }
    }
    
    
    return 0;
}
