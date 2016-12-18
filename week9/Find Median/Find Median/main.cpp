//
//  main.cpp
//  Find Median
//
//  Created by 徐鸿力 on 16/12/18.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>

using namespace std;

int helper(int a[], int N, int K) {
    int i, j, p, res;
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
    return res;
}

int main() {
    int N, K, K1, K2;
    //cin >> N;
    while(cin >> N) {
        //cin >> N;
        if(N == 0)  break;
        int a[N];
        int res;
        for(int i = 0; i < N; i ++) {
            cin >> a[i];
        }
        if(N % 2 == 1) {
            K = (N + 1) / 2;
            res = helper(a, N, K);
        } else {
            K1 = N / 2;
            K2 = K1 + 1;
            res = helper(a, N, K1);
            res += helper(a, N, K2);
            res /= 2;
        }
        cout << res << endl;
        //cin >> N;
    }
    return 0;
}
