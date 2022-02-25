#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int A[4][2]={{2,20},{4,40},{8,82},{12,100}};
	
	for (int b=0;b<4;b++){
		for (int k=0;k<2;k++){
			cout<<A[b][k]<<" ";
		}
		cout << endl;
	}
getch();

}
