//
//  394.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 23/08/18.
//  Copyright © 2018 ITB. All rights reserved.
//

#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <map>

using namespace std;

map<string, int> ind;

struct Addr{
    string name;
    int base_address;
    int num_of_dimension;
    int size_of_bytes;
    vector<int> L;
    vector<int> U;
    vector<int> weight;
};

int main(){
    int N, R;
    scanf("%d %d", &N, &R);
    
    Addr Obj[10000];
    
    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;
        ind[name] = i;
        Obj[i].name = name;
        cin >> Obj[i].base_address;
        cin >> Obj[i].size_of_bytes;
        
        int number_of_dimension, L, U;
        cin >> number_of_dimension;
        
        Obj[i].num_of_dimension = number_of_dimension;
        
        for (int j = 0; j < number_of_dimension; j++) {
            cin >> L >> U;
            Obj[i].L.push_back(L);
            Obj[i].U.push_back(U);
        }
        Obj[i].weight.insert(Obj[i].weight.begin(), Obj[i].size_of_bytes);
        
        for (int j = number_of_dimension - 1; j > 0; j--) {
            int weight = Obj[i].weight[0] * (Obj[i].U[j] - Obj[i].L[j] + 1);
            Obj[i].weight.insert(Obj[i].weight.begin(), weight);
        }
    }
    
    for (int i = 0; i < R; i++) {
        string name;
        cin >> name;
        
        int temp_addr;
        int comp_addr  = 0;
        
        cout << name << "[";
        int index = ind[name];
        
        for (int j = 0; j < Obj[index].num_of_dimension; j++) {
            cin >> temp_addr;
            cout << temp_addr;
            
            comp_addr = comp_addr + ((temp_addr - Obj[index].L[j]) * Obj[index].weight[j]);
            if(j != Obj[index].num_of_dimension - 1) {
                cout << ", ";
            } else {
                cout << "] = " << Obj[index].base_address + comp_addr << endl;
            }
        }
        
        
    }
    
    return 0;
}
