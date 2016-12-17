//
//  main.cpp
//  Divide by Itself
//
//  Created by 徐鸿力 on 16/12/16.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 10; i <= n; i ++) {
        int num = i % 10 + i / 10;
        if(i % num == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
