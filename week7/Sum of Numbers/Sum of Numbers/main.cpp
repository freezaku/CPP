//
//  main.cpp
//  Sum of Numbers
//
//  Created by 徐鸿力 on 16/12/16.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int a, num, sum = 0;
    cin >> a;
    for(int i = 0; i < 5; i ++) {
        cin >> num;
        if(num < a) {
            sum += num;
        }
    }
    cout << sum << endl;
    return 0;
}
