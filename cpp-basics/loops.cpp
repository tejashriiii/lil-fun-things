#include <iostream>

using namespace std;

int main(){
	int a;
	cout << "give number" << endl;
	cin >> a;
	if (a % 2==0 && a > 0) { //every if needs condition in (), no ; to end only {}
		cout << "no is even and positive" << endl;
	}
	else if (a % 2==0 && a < 0){ //same as if, condition needs to be given
		cout << "no is even and negative" << endl;
	}

	else { //w/o condition only is valid, rest invalid
		if (a % 2 !=0 && a > 0) {
			cout << "this is odd and positive" << endl;
		} else if (a% 2 !=0 &&  a < 0) { // so now i know, else condition doesnt work, if you wanna keep adding conditions dont use else in cpp, made it a else if.
			cout << "odd and negative" << endl;
		}
	}
	return 0;

}
				


