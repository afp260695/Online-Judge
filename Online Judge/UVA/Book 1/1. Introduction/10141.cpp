//
//  10141.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 27/08/18.
//  Copyright © 2018 ITB. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <string>


using namespace std;

int main(){
    long long int n, p;
    string proposal;
    cin >> p >> n;
    getchar();
    int iter = 1;
    while (n != 0 && p != 0) {
        string name_company_current;
        long int proposal_requirement_met_max = 0;
        long double price_min = 0;
        
        for (int i = 0; i < p; i++) {
            getline(cin, proposal);
        }
        
        for (int i = 0; i < n; i++) {
            string temp_name_company;
            
            long double temp_price;
            long int temp_proposal_requirement_met = 0;
            
            
            getline(cin, temp_name_company);
            cin >> temp_price >> temp_proposal_requirement_met;
            getchar();
            
            for (int j = 0; j < temp_proposal_requirement_met; j++) {
                getline(cin, proposal);
            }
            
            if(i == 0) {
                name_company_current = temp_name_company;
                price_min = temp_price;
                proposal_requirement_met_max = temp_proposal_requirement_met;
            }
            
            if(temp_proposal_requirement_met > proposal_requirement_met_max || (temp_proposal_requirement_met == proposal_requirement_met_max && price_min > temp_price)) {
                name_company_current = temp_name_company;
                price_min = temp_price;
                proposal_requirement_met_max = temp_proposal_requirement_met;
            }
            
            
            
        }
        
        if(iter != 1) {
            cout << endl;
        }
        cout << "RFP #" << iter << endl;
        cout << name_company_current << endl;
        
        iter++;
       
        
        
        cin >> p >> n;
        getchar();
    }
    
    return 0;
}
