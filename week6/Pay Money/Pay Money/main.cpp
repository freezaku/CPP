//
//  main.cpp
//  Pay Money
//
//  Created by 徐鸿力 on 16/12/15.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int money, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0;
    cin >> money;
    if(money >= 100) {
        count1 = money / 100;
        money = money % 100;
    }
    if(money >= 50) {
        count2 = money / 50;
        money = money % 50;
    }
    if(money >= 20) {
        count3 = money / 20;
        money = money % 20;
    }
    if(money >= 10) {
        count4 = money / 10;
        money = money % 10;
    }
    if(money >= 5) {
        count5 = money / 5;
        money = money % 5;
    }
    if(money >= 1) {
        count6 = money / 1;
        money = money % 1;
    }
    cout << count1 << endl;
    cout << count2 << endl;
    cout << count3 << endl;
    cout << count4 << endl;
    cout << count5 << endl;
    cout << count6 << endl;
}
