#include <iostream>
#include <string.h>
using namespace std;


int main(){
	
	string kata;
	
	cout << "masukan kata = HELLO : ";
	cin >> kata;
	
	if(kata == "HELLO"){
		cout << "kata yang anda masukan sesuai";
	}else {
		cout << "kata yang anda masukan tidak sesuai";
	}
	return 0;
}