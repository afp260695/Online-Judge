//
//  11498.cpp
//  Online Judge
//
//  Created by Ahmad Fajar Prasetiyo on 06/01/19.
//  Copyright © 2019 ITB. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    int K, N, M, X, Y;
    
    do{
        cin >> K;
        cin >> N >> M;
        for (int i=0; i<K; i++) {
            cin >> X >> Y;
            if(X == N || Y == M) {
                cout << "divisa" << endl;
            } else if(X > N && Y > M) {
                cout << "NE" << endl;
            } else if(X < N && Y < M) {
                cout << "SO" << endl;
            } else if(X > N && Y < M) {
                cout << "SE" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
        
    }while(K != 0);
    return 0;
}
