//
//  main.cpp
//  Abnormal Cell
//
//  Created by 徐鸿力 on 16/12/18.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int cell[N][N];
    int count = 0;
    for(int i = 0; i < N; i ++) {
        for(int j = 0; j < N; j ++) {
            cin >> cell[i][j];
        }
    }
    for(int i = 1; i < N - 1; i ++) {
        for(int j = 1; j < N - 1; j ++) {
            if((cell[i][j] <= cell[i + 1][j] - 50) && (cell[i][j] <= cell[i - 1][j] - 50) && (cell[i][j] <= cell[i][j + 1] - 50) && (cell[i][j] <= cell[i][j - 1] - 50)) {
                count ++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
