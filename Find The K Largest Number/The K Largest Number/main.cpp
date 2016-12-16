//
//  main.cpp
//  The K Largest Number
//
//  Created by 徐鸿力 on 16/12/15.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int N, K;
    cin >> N;
    cin >> K;
    int a[N];
    int i, j, p, res;
    for(i = 0; i < N; i ++) {
        cin >> a[i];
    }
    for(i = 0; i < N; i ++) {
        p = 0;
        for(j = 0; j < N; j ++) {
            if(i != j && a[j] > a[i]) {
                p ++;
            }
            if(p >= K) {
                break;
            }
        }
        if(j == N && p == K - 1) {
            res = a[i];
            break;
        }
    }
    cout << res << endl;
    return 0;
}
