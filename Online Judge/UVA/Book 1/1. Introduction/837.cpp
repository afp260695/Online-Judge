//
//  837.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 25/08/18.
//  Copyright © 2018 ITB. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <queue>
#include <algorithm>
#include <iomanip>
#include <set>

using namespace std;

multiset<double> cumulative_tc;
multiset<double>::iterator it;

double cumulative_count();

struct Compare {
    constexpr bool operator()(pair<double, double> const & a,
                              pair<double, double> const & b) const noexcept
    { return a.first > b.first; }
};

int main(){
    
    
    int n, m;
    double x1, x2, y1, y2, r;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (i != 0) {
            cout << endl;
        }
        priority_queue<pair<double, double>, vector<pair<double, double>>, Compare> pq_dd;
        cumulative_tc.clear();
        
        cin >> m;
        for (int j = 0; j < m; j++) {
            cin >> x1 >> y1 >> x2 >> y2 >> r;
            
            if (x1 > x2) {
                swap(x1,x2);
            }
            
            pq_dd.push(make_pair(x1, r));
            pq_dd.push(make_pair(x2, -r));
        }
        
        double last_start = pq_dd.top().first;
        cout << pq_dd.size() + 1 << endl;
        cout << fixed << setprecision(3) << "-inf " << last_start << " " << 1.0 << endl;
        while (!pq_dd.empty()) {
            
            if(pq_dd.top().second >= 0) {
                cumulative_tc.insert(pq_dd.top().second);
            } else {
                cumulative_tc.erase (cumulative_tc.find(-pq_dd.top().second));
            }
            
            cout << fixed << setprecision(3) << last_start << " ";
            pq_dd.pop();
            last_start = pq_dd.top().first;
            
            if(!pq_dd.empty()){
                cout << fixed << setprecision(3) << last_start << " " << cumulative_count() << endl;
            } else {
                cout << fixed << setprecision(3) << "+inf" << " " << cumulative_count() << endl;
            }
            
            
        }
        
        
        
    }
    
    
    return 0;
}

double cumulative_count() {
    double temp_cumulative = 1;
    
    for (it=cumulative_tc.begin(); it!=cumulative_tc.end(); ++it) {
        temp_cumulative = temp_cumulative * (*it);
    }
    
    return temp_cumulative;
}
