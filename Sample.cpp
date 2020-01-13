#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

int main(){
	
	string str1("The quick brown fox jumps over the");
	string str2(" lazy dog near the bank of the river ");
	string str3;
	
	cout << str1.substr(10, 15);
	str3 = str1;
	str3 += str2;
	
	if(str3.empty()){
		cout << "str3 is empty";
	} else{
		cout << endl << str3;
	}
	str1.insert(9, str2);
	cout << endl << str1;
	cout << endl << str1.find(str2);
	cout << endl << str3.find("the", 20);
	
	return 0;
}
