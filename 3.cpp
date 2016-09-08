#include <iostream>

using namespace std;


int main(){
	int n;

	cin >> n;

	int d = 45 * n + 5*(n/2) + 15*((n-1)/2);

	//cout << 9 + d/60 << " " << d % 60;

	printf("%i %i",9+d/60,d%60);
	
	return 0;
}
