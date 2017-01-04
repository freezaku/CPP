//
//  main.cpp
//  Find Index
//
//  Created by 徐鸿力 on 17/1/3.
//  Copyright © 2017年 Honglix Xu. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n];
    for(int i = 0; i < n; i ++) {
        cin >> x[i];
    }
    int i = 0;
    for(i = 0; i < n; i ++) {
        if(x[i] == i) {
            cout << i;
            break;
        }
    }
    if(i == n) {
        cout << "N";
    }
    return 0;
}
