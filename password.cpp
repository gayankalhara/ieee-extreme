#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio (false);
    string password;
    cin >> password;

    int noOfOperations, outputCount=0;
    vector<char> output;

    cin >> noOfOperations;

    if(!(noOfOperations >= 1 && noOfOperations <= 300000)){
    	return -1;
    }

    for(int z=0; z<noOfOperations; z++){
    	int command;
    	cin >> command;
    	int i, j;
    	cin >> i;
	    cin >> j;

    	switch(command){
    		case 1:
    			{
    				outputCount++;
	    			int k;
	    			cin >> k;

				    if(password.substr(i-1,j-i+1).compare(password.substr(k-1,j-i+1))==0){
				    	output.push_back('Y');
				    } else{
				    	output.push_back('N');
				    }
			    }
				break;

			case 2:
				{
				    int k;
	    			cin >> k;
				    string str2 = password.substr(k-1,j-i+1);

					char cPassword[password.size()];
					strcpy(cPassword, password.c_str());

					char cStr2[str2.size()+1];
					strcpy(cStr2, str2.c_str());

					for(int k=i-1; k<=j-1; k++){
						cPassword[k] = cStr2[k-(i-1)];
					}

					password = cPassword;
				}
				break;

			case 3:
				{
					char cPassword[password.size()];
					strcpy(cPassword, password.c_str());

					for(int k=i-1; k<j; k++){
						int ch = cPassword[k];
						if(ch == 122){ // if z
							ch = 97; // set a
						} else{
							ch++;
						}
						char aCh = ch;
						cPassword[k] = aCh;
					}

					password = cPassword;

				}
				break;
			default:
				return -1;
    	}
    }

    for(vector<int>::size_type i = 0; i != output.size(); i++) {
	    cout << output[i] << endl;
    }

    return 0;
}