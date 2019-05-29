#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int brush[2];
   
    int allcolor[21];
    int t;
    cin >> t;
    
    if (t < 1 || t > 5 ) {
        return 0;
    }
         
    for(int i=0;i<t;i++) { 
        brush[0] = 0;
        brush[1] = 0;
        vgcfdxhg
        int numOfColor;
        int currentColor;
        int changes = 0; 
        cin >> numOfColor;

        if (numOfColor < 1 || numOfColor > 500) {
        return 0;
        }
        int takenColors[numOfColor];

        for(int a=0;a<21;a++) {
        allcolor[a] = 0;
        }

        for(int z=0;z<numOfColor;z++) {
        cin >> currentColor; 
        if(currentColor < 1 || currentColor > 20) {
            return 0;
        }
        takenColors[z] = currentColor;
        allcolor[currentColor] += 1;
        }

        for(int m=0;m<numOfColor;m++) {            
        if(brush[0] == takenColors[m]) {
            if(!(allcolor[brush[0]] == 0)) {
                allcolor[brush[0]] = allcolor[brush[0]] - 1;
            }
           
            continue;
        }

        if(brush[1] == takenColors[m]) {
            if(!(allcolor[brush[1]] == 0)) {
                allcolor[brush[1]] = allcolor[brush[1]] - 1;
            }
           
            continue;
        }

        if(allcolor[brush[0]] > allcolor[brush[1]]) {
            brush[1] = takenColors[m];
            if(!(allcolor[brush[1]] == 0)) {
                allcolor[brush[1]] = allcolor[brush[1]] - 1;
            }
            
            changes++;
        } else if (allcolor[brush[0]] <= allcolor[brush[1]]) {
            brush[0] = takenColors[m];
             if(!(allcolor[brush[0]] == 0)) {
                allcolor[brush[0]] = allcolor[brush[0]] - 1;
            }
            
            changes++;
            
        }
        }


        cout << changes << endl;
        }
                                
    return 0;
}
