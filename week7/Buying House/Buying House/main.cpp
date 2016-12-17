//
//  main.cpp
//  Buying House
//
//  Created by 徐鸿力 on 16/12/16.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    double N, K;
    while(cin >> N >> K) {
        int sum = N, i;
        double price = 200;
        for(i = 2; i <= 20; i ++) {
            sum += N;
            price = price * (1 + K / 100);
            if(sum > price) {
                cout << i << endl;
                break;
            }
        }
        if(i > 20) {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
