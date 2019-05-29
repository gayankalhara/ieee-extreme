#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iterator>
#define toDigit(c) (c-'0')
using namespace std;

int main() {

	int noOfCases = 0;
	cin >> noOfCases;
	cout << endl;

	for(int i=1; i<=noOfCases; i++){

		char inputQL[2];

		for(int y=0; y<2; y++){
			cin >> inputQL[y];
		}

		int noOfQuestions = toDigit(inputQL[0]);
		int noOfLies = toDigit(inputQL[1]);

		for(int z=0; z<noOfQuestions; z++){


			string str;
			string ws;
			cin >> ws;

			getline(cin, str);
			cout << str;

			int N;
			cin >> N;

			// istringstream buf(str);
		 //    istream_iterator<string> beg(buf), end;
 
		 //    vector<string> tokens(beg, end);

		 //    for(string s: tokens){
		 //        cout << s << '\n';
		 //    }

		}
		
	}	

    return 0;
}