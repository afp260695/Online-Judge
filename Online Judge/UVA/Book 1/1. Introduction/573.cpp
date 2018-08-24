//
//  573.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 24/08/18.
//  Copyright © 2018 ITB. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    double H, U, D, F;
    
    cin >> H >> U >> D >> F;
    
    while (H != 0) {
        int day = 0;
        double height = 0;
        double up = U;
        
        do{
            day++;
            
            if(up > 0) {
                height = height + up;
            }
            
            
            if(height > H) {
                break;
            }
            
            height = height - D;
            
            up = up - ((U * F) / 100);
            
        }while((height >= 0));
        
        if(height >= H) {
            cout << "success on day " << day <<endl;
        } else {
            cout << "failure on day " << day <<endl;
        }
        
        cin >> H >> U >> D >> F;
    }
}
