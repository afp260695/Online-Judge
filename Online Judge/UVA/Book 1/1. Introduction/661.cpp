//
//  661.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 24/08/18.
//  Copyright © 2018 ITB. All rights reserved.
//

#include <iostream>
#include <map>

using namespace std;

int main(){
    int n, m, c;
    int seq = 1;
    while (true) {
        int consumtion = 0;
        int temp;
        int max_consumtion = 0;
        bool blown = false;
        cin >> n >> m >> c;
        
        if(n == 0 && m == 0 & c == 0) {
            break;
        }
        
        map<int, int> m_consumtion;
        map<int, int> m_state;
        
        for (int i = 1; i <= n; i++) {
            cin >> m_consumtion[i];
            m_state[i] = 0;
        }
        
        for (int j = 0; j < m; j++) {
            cin >> temp;
            if(m_state[temp] == 0) {
                m_state[temp] = 1;
                consumtion = consumtion + m_consumtion[temp];
            } else {
                m_state[temp] = 0;
                consumtion = consumtion - m_consumtion[temp];
            }
            
            if(consumtion > c) {
                blown = true;
            }
            
            if(max_consumtion < consumtion) {
                max_consumtion = consumtion;
            }
        }
        
        if(blown){
            cout << "Sequence " << seq << endl;
            cout << "Fuse was blown." << endl;
        } else {
            cout << "Sequence " << seq << endl;
            cout << "Fuse was not blown." << endl;
            cout << "Maximal power consumption was " << max_consumtion << " amperes." << endl;
        }
        
        cout << endl;
        seq++;
        
    }
    return 0;
}
