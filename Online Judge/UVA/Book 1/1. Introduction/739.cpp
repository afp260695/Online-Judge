//
//  739.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 24/08/18.
//  Copyright © 2018 ITB. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void print_space(unsigned long n);

int main(){
    string no_code = "AIUEOYWH";
    string code[7] = {"AIUEOYWH", "BPFV", "CSKGJQXZ", "DT", "L", "MN", "R"};
    
    string code1 = "BPFV";
    string code2 = "CSKGJQXZ";
    string code3 = "DT";
    string code4 = "L";
    string code5 = "MN";
    string code6 = "R";
    
    string temp;
    
    print_space(9);
    cout << "NAME";
    print_space(21);
    cout << "SOUNDEX CODE" << endl;
    
    while (cin >> temp) {
        
        string result = "0000";
        
        print_space(9);
        cout << temp;
        print_space(25 - temp.length());
        int pos = 1;
        result[0] = temp[0];
        int last_find = 0;
        int index_find = 0;
        for (int i = 0; i < temp.length(); i++) {
            
            size_t found;
            
            for (int j = 0; j < 7; j++) {
                found = code[j].find(temp[i]);
                if (found != string::npos){
                    
                    index_find = j;
                    
                }
                
            }
            
            if(last_find != index_find && index_find != 0 && i != 0) {
                result[pos] = index_find + '0';
                pos++;
            }
            
            last_find = index_find;
            
            
            
        }
        
        cout << result << endl;
    }
    
    print_space(19);
    cout << "END OF OUTPUT" << endl;
    return 0;
}

void print_space(unsigned long n) {
    for (int i = 0; i < n; i++) {
        cout << " ";
    }
}
