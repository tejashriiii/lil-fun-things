#include <iostream>

using namespace std;

int main(){
	int a=0;
	cout << "give number" << endl;
//	cin >> a;
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




	// for loops
	for(int m=0;m <=20; m+=3){
		cout << m << endl;
	}

	//while loops
	while (a <=50){
		int i=2;	

		for (i; i < a; i++){
			if (a%i ==0){ break;} }
		if (i == a){
			cout << a << endl;
		 //break is used to abruptly stop everything youre doing after a condition is met, continue is, leaving this condition continue doing everything.
			
	}
		a++;
		
	}
	
	return 0;

}
				


