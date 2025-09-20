#include <iostream>

using namespace std;

int main(){
	// recursive series expansion for calculating pi attributed to euler
	//Sm=Sm−1(m/2m+1) 
	
	int max_terms = 100; //how many, in series
	double sm = 1;
	double sum = 1;
	for (int m=1; m<max_terms;m++){
		sm *= m/(2.0*m +1);
		sum +=sm;
	//	cout << "no of iterations:"<< m << endl;
	}
	cout.precision(15);

	cout << 2*sum << endl;

	return 0;
}

