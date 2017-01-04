//
//  main.cpp
//  Receipts
//
//  Created by 徐鸿力 on 17/1/3.
//  Copyright © 2017年 Honglix Xu. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float countA = 0.0;
    float countB = 0.0;
    float countC = 0.0;
    float count1 = 0.0;
    float count2 = 0.0;
    float count3 = 0.0;
    for(int i = 0; i < 3; i ++) {
        int ID;
        cin >> ID;
        int n;
        cin >> n;
        for(int j = 0; j < n; j ++) {
            char kind;
            float money;
            cin >> kind >> money;
            if(kind == 'A') {
                countA += money;
            } else if(kind == 'B') {
                countB += money;
            } else if(kind == 'C') {
                countC += money;
            }
            if(ID == 1) {
                count1 += money;
            } else if(ID == 2) {
                count2 += money;
            } else if(ID == 3) {
                count3 += money;
            }
        }
    }
    cout << "1" << fixed << " " << setprecision(2) << count1 << endl;
    cout << "2" << setprecision(2) << " " << count2 << endl;
    cout << "3" << setprecision(2) << " " << count3 << endl;
    cout << "A" << setprecision(2) << " " << countA << endl;
    cout << "B" << setprecision(2) << " " << countB << endl;
    cout << "C" << setprecision(2) << " " << countC << endl;
    return 1;
}
