/* 
	Purpose: 6_Indirect_Recursion
	Date: 02-28-2021

 */

#include <iostream>

using namespace std;

void funB(int n);

void funA(int n){
	if(n>0)
	{
		cout << n << "  " ;
		funB(n-1);
	}
}

void funB(int n){
	if(n>1)
	{
		cout << n << "  ";
		funA(n/2);
	}
}

int main() {
	
	funA(20);
	
	return 0;
}


/* 
Output:
20  19  9  8  4  3  1

*/
