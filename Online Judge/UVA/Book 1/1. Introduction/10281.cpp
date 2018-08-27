//
//  10281.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 27/08/18.
//  Copyright © 2018 ITB. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

double different_time(string low, string high);

int main() {
    double traveled = 0;
    string time_now = "00:00:00";
    string time_temp;
    char cek;
    double speed_now = 0;
    
    while(cin >> time_temp) {
        traveled = traveled + (different_time(time_now, time_temp) * speed_now);
        time_now = time_temp;
        
        cek = getchar();
        if(cek == ' ') {
            cin >> speed_now;
        } else {
            cout << time_now << " " << fixed << setprecision(2) << traveled << " km" << endl;
        }
    }
    return 0;
}

double different_time(string low, string high) {
    int h_l = (low[0] - '0') * 10 + (low[1] - '0');
    int m_l = (low[3] - '0') * 10 + (low[4] - '0');
    int s_l = (low[6] - '0') * 10 + (low[7] - '0');
    
    int h_h = (high[0] - '0') * 10 + (high[1] - '0');
    int m_h = (high[3] - '0') * 10 + (high[4] - '0');
    int s_h = (high[6] - '0') * 10 + (high[7] - '0');
    
    return (h_h - h_l) + ((m_h - m_l) / 60.0) + ((s_h - s_l) / 3600.0);
}
