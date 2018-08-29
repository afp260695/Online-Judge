//
//  10683.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 29/08/18.
//  Copyright © 2018 ITB. All rights reserved.
//

#include <iostream>

using namespace std;

long long int change_to_mili_second_old(string time);
long long int change_to_mili_second_new(string time);

int main(){
    long long int one_day_old = 24 * 60 * 60 * 100;
    long long int one_day_new = 10 * 100 * 100 * 100;
    long long int one_hour_new = 100 * 100 * 100;
    long long int one_minute_new = 100 * 100;
    long long int one_second_new = 100;
    
    string time;
    
    while (cin >> time) {
        long long int time_in_old = change_to_mili_second_old(time);
        long long int result = (time_in_old * one_day_new) / one_day_old;
        long long int temp;
        
        cout << result/one_hour_new;
        result = result % one_hour_new;
        temp = result/one_minute_new;
        
        if(temp < 10) {
            cout << "0" << temp;
        } else {
            cout << temp;
        }
        
        result = result % one_minute_new;
        temp = result/one_second_new;
        
        if(temp < 10) {
            cout << "0" << temp;
        } else {
            cout << temp;
        }
        
        temp = result % one_second_new;
        
        if(temp < 10) {
            cout << "0" << temp;
        } else {
            cout << temp;
        }
        
        cout << endl;
    }
    return 0;
}

long long int change_to_mili_second_old(string time){
    int hour = ((time[0] - '0') * 10) + (time[1] - '0');
    int minutes = ((time[2] - '0') * 10) + (time[3] - '0');
    int second = ((time[4] - '0') * 10) + (time[5] - '0');
    int mili_second = ((time[6] - '0') * 10) + (time[7] - '0');
    
    return (hour * 60 * 60 * 100) + (minutes * 60 * 100) + (second * 100) + mili_second;
    
}

long long int change_to_mili_second_new(string time){
    int hour = (time[0] - '0');
    int minutes = ((time[1] - '0') * 10) + (time[2] - '0');
    int second = ((time[3] - '0') * 10) + (time[4] - '0');
    int mili_second = ((time[5] - '0') * 10) + (time[6] - '0');
    
    return (hour * 100 * 100 * 100) + (minutes * 100 * 100) + (second * 100) + mili_second;
    
}
