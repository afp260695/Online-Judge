//
//  10420.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 27/08/18.
//  Copyright © 2018 ITB. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> country;
    map<string, int> count_per_country;
    long int n;
    
    cin >> n;
    
    for (long int i = 0; i < n; i++) {
        string temp_country, temp;
        cin >> temp_country;
        getline(cin, temp);
        
        if(count_per_country[temp_country] != 0) {
            count_per_country[temp_country]++;
        } else {
            country.push_back(temp_country);
            count_per_country[temp_country] = 1;
        }
    }
    
    sort(country.begin(), country.end());
    
    for (long int i = 0; i < country.size(); i++) {
        cout << country[i] << " " << count_per_country[country[i]] << endl;
    }
    
    return 0;
}
