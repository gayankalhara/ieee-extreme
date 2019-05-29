#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //Get no of colors
    int noOfColors;
    cin >> noOfColors;

    int colors[noOfColors];

    //Get color codes to colors[]
    for(int y=0; y<noOfColors; y++){
        cin >> colors[y];
    }

    //Array to store the count of colors
    int allColors[20];
    //Initialize the array with 0s
    for(int y=0; y<noOfColors; y++){
        allColors[y] = 0;
    }
    //Store the count of colors
    for(int y=0; y<noOfColors; y++){
        allColors[colors[y]]++;
    }

    for(int y=1; y<noOfColors+1; y++){
        cout << allColors[noOfColors-(y)] << " ";
    }
    cout << endl;

    return 0;
}
