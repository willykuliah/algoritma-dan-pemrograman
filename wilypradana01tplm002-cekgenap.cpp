#include <iostream>
#include <string.h>
using namespace std;


int main(){
	
		int n;
	
	cout <<"masukan bilangan : ";
	cin >> n;
	
	if(n %2 == 0){
		cout << "adalah bilangan genap";
	}else{
		cout << "adalahbilangan ganjil";
	};
	
	return 0;
}