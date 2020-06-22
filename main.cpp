//
//  main.cpp
//  1D Array
//
//  Created by Ira Xavier Porchia on 5/7/20.
//  Copyright © 2020 Ira Xavier Porchia. All rights reserved.
//

#include <iostream>
using namespace std;

const int MAX = 10;

int main(int argc, const char * argv[]) {
    int arr[MAX];
    for(int i = 0; i < MAX; i++){
        arr[i] = (i + 1) * 10;
        cout << arr[i] << " ";
    }
    cout << endl;
    arr[8] = 97;
    for(int i = 0; i < MAX; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << arr[8];
    cout << endl;
    for(int i = 0; i < MAX; i++){
        arr[i] = 0;
        cout << arr[i] << " ";
    }
    cout << endl;
}
