#include <iostream>
#include <vector>
#include <algorithm> // ÓÃÓÚËã·¨
#include <string> 
using namespace std;
int main() {
	int n,a[1000];
	int Fword = 0;
	int i = 0;
	cin>> n;
	Fword = n;
	cout << Fword << " ";
	while (Fword != 1) {
		if (Fword%2==0)
		{
			Fword = Fword/ 2;
			cout << Fword << " ";
			a[i] = Fword;
			i++;
		}
		else
		{
			Fword= Fword * 3 + 1;
			cout << Fword << " ";
			a[i] = Fword;
			i++;
		}
	}
	int z=i-1;
	while (z < 0) {
		cout << a[z] << " ";
		i--;
	}




	return 0;
}