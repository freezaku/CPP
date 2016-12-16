//
//  main.cpp
//  Age and Disater
//
//  Created by 徐鸿力 on 16/12/15.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    float  count1 = 0, count2 = 0, count3 = 0, count4 = 0, res1, res2, res3, res4;
    cin >> n;
    for(int i = 0; i < n; i ++) {
        int age;
        cin >> age;
        if(age <= 18) {
            count1 ++;
        } else if(age >= 18 && age <= 35) {
            count2 ++;
        } else if(age >= 36 && age <= 60) {
            count3 ++;
        } else if(age > 60){
            count4 ++;
        }
    }
    res1 = count1 / n * 100;
    res2 = count2 / n * 100;
    res3 = count3 / n * 100;
    res4 = count4 / n * 100;
    cout << "1-18: " << fixed << setprecision(2) << res1 << "%" << endl;
    cout << "19-35: " << fixed << setprecision(2) << res2 << "%" << endl;
    cout << "36-60: " << fixed << setprecision(2) << res3 << "%" << endl;
    cout << "60-: " << fixed << setprecision(2) << res4 << "%" << endl;
    
    return 0;
}
