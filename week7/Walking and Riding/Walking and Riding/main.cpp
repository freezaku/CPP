//
//  main.cpp
//  Walking and Riding
//
//  Created by 徐鸿力 on 16/12/16.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, distance;
    cin >> n;
    for(int i = 0; i < n; i ++) {
        cin >> distance;
        double timeR = 27 + 23 + distance / 3.0;
        double timeW = distance / 1.2;
        if(timeR < timeW) {
            cout << "Bike" << endl;
        } else if(timeR > timeW) {
            cout << "Walk" << endl;
        } else {
            cout << "All" << endl;
        }
    }
    return 0;
}
