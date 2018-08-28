//
//  10528.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 28/08/18.
//  Copyright © 2018 ITB. All rights reserved.
//

#include <iostream>
#include <set>
#include <map>
#include <string>

using namespace std;

string keys[14] = {"A", "B", "C", "D", "E", "F", "G", "A#", "B#", "C#", "D#", "E#", "F#", "G#"};
string major_scale[12] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
int map_major_scale[14][12] = {
    1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1, 0,
    1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1,
    1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0,
    1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0,
    1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1,
    1, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0,
    1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 0,
    0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1,
    0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1,
    0, 1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1
    
};

int main() {
    map<string, int> m_keys;
    for (int i = 0; i < 14; i++) {
        m_keys[keys[i]] = i;
    }
    
    string temp_line;
    string delimiter = " ";
    getline(cin, temp_line);
    
    while(temp_line.compare("END") != 0) {
        set<string> set_keys;
        size_t pos = 0;
        string token;
        while ((pos = temp_line.find(delimiter)) != string::npos) {
            token = temp_line.substr(0, pos);
            set_keys.insert(token);
            temp_line.erase(0, pos + delimiter.length());
        }
        set_keys.insert(temp_line);
        
        set<string>::iterator it = set_keys.begin();
        int temp[12];
        for (int i = 0; i < 12; i++) {
            temp[i] = map_major_scale[m_keys[(*it)]][i];
        }
        
        for (it = set_keys.begin(); it!=set_keys.end(); ++it) {
            for (int i = 0; i < 12; i++) {
                temp[i] = temp[i] & map_major_scale[m_keys[(*it)]][i];
            }
        }
        
        bool first = true;
        for (int i = 0; i < 12; i++) {
            if(temp[i]) {
                if (first) {
                    cout << major_scale[i];
                    first = false;
                } else {
                    cout << " " << major_scale[i];
                }
            }
            
        }
        
        cout << endl;
        getline(cin, temp_line);
    }
    
    
    return 0;
}

void init() {
    
}
