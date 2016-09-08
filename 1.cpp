#include <iostream>

using namespace std;


int main(){
	char c;

	cin >> c;

	int x = (int)c;

	if(x > 96 && x < 123){
		x = x - 32;
	}

	cout << char(x);

	return 0;
}
