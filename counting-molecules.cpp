#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
	double nC=0, nH=0, nO=0, nWater=0, nCO2=0, nGlucose=0;

   	cin >> nC;
    cin >> nH;
    cin >> nO;

    if(!(nC >= 0 || nC < pow(10,10) || nH >= 0 || nH < pow(10,10) || nO >= 0 || nO < pow(10,10))){
    	cout << "Error" << endl;
    	return 0;
    }

    	nCO2 = ((2.0*nO) - nH) / 4.0;
    	nWater = (nH + (2.0*nO) - (4*nC)) / 4.0;
    	nGlucose = (nH - (2.0*nO) + (4*nC)) / 24.0;

    	double temp;
		if(modf(nCO2, &temp) != 0 || modf(nWater, &temp) != 0 || modf(nGlucose, &temp) != 0){
			cout << "Error" << endl;
    		return 0;
		}

    	cout << fixed << setprecision(0) << nWater << " " << nCO2 << " " << nGlucose << endl;

    return 0;
}