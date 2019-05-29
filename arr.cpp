#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int x, int y, int *arr){
     int (*a)[x][y] = (int (*)[x][y]) arr;

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << *a[i][j] << endl;
        }
    }
    //cout << arr[0][0] << endl;
}

int main() {
    int x=2, y=2;
    int arr[2][2] = {{1,2}, {5, 4}};    
    printArr(x, y, &arr[x][y]);

    return 0;
}
