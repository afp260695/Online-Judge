//
//  11340.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 06/01/19.
//  Copyright © 2019 ITB. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main(){
    long long int sum;
    int N, K, M, count_enter;
    char temp_char;
    int temp_val;
    
    cin >> N;
    
    for (int i=0; i<N; i++) {
        sum = 0;
        cin >> K;
        map<char,int> dic;
        map<char,int>::iterator it;
        
        for (int j=0; j<K; j++) {
            cin >> temp_char >> temp_val;
            dic[temp_char] = temp_val;
        }
        
        cin >> M;
        getchar();
        count_enter = 0;
        
        while(count_enter < M) {
            temp_char = getchar();
            
            if(temp_char == '\n') {
                count_enter++;
            } else {
                it = dic.find(temp_char);
                if (it != dic.end())
                    sum = sum + it->second;
            }
        }
        
        if(sum%100 < 10) {
            cout << sum/100 << "." << "0" << sum%100 << "$" << endl;
        } else {
            cout << sum/100 << "." << sum%100 << "$" << endl;
        }
        
    }
    
}
