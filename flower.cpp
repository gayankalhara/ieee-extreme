#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int recursive(vector<int>& random) {
    if (random.size() == 1) {
       return random[0];
    } else {
        int x=1;
        int arr[random.size()];
        for (int s=0;s<random.size();s++) {
            arr[s] = -1;
        }
        
        int y=0;
        for(vector<int>::size_type i = 0; i != random.size(); i++) {
            
               arr[y] = x;
               y++; 
           
            x++;
        }
        
        for(int c=0;c<random.size();c++){
            if(arr[c] != -1) {
               random.erase(random.begin()+arr[c]); 
            }   
        }
        
         for(vector<int>::size_type i = 0; i != random.size(); i++) {
            
              cout << random[i];
        }

        return recursive(random);
    }  
}
int main() {
    int testCases, petals;
    cin >> testCases;
       
    for(int i=0; i<testCases; i++){
        cin >> petals;
        vector<int> v;
        for(int a=1;a<=petals;a++){
           v.push_back(a);  
        }
        //int res = recursive(v);
    }

    return 0;
}