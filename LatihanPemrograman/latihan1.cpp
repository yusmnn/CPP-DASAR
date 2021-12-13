#include <iostream>

int main(){
	int i, j, k,l;
	
	std::cin >> k ;
	
	system("cls");
	for (i = 1; i<=4; ++i){
		for(j=1; j<=i; ++j){
			std::cout << ("%d", k++) << " ";
		}
		std::cout << "\n";
	}
	return 0;
}
