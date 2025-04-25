#include <iostream>
#include <string.h>
using namespace std;


int main(){
	
	char A[15];
	char B[15];
	
	cout << "masukan kata 1 : ";
	cin >> A;
	cout << "masukan kata 2: ";
	cin >> B;
	
	if(strcmp(A,B) == 0) {
	cout << "kata 1 dan kata 2 sama ";
	}else{
		cout << "kata 1 dan kata 2 tidak  sama ";
	}
	
	return 0;
}