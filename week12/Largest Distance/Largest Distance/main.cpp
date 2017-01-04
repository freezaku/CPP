//
//  main.cpp
//  Largest Distance
//
//  Created by 徐鸿力 on 16/12/20.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

int main() {
    int n;
    cin >> n;
    double point[n][2];
    double maxDistance = 0.0;
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < 2; j ++) {
            cin >> point[i][j];
        }
    }
    for(int i = 0; i < n; i ++) {
        double distance = 0.0;
        for(int j = i + 1; j < n; j ++) {
            distance = (point[i][0] - point[j][0]) * (point[i][0] - point[j][0]) + (point[i][1] - point[j][1]) * (point[i][1] - point[j][1]);
            if(distance > maxDistance) {
                maxDistance = distance;
            }
        }
    }
    cout << fixed << setprecision(4) << sqrt(maxDistance) << endl;
    return 0;
}
