#include <iostream>
#include <iomanip>

int main()
{
	int a=11;
	int b=11;
	int **m = new int *[a];
	for(int i = 0; i<a; i++) 
		m[i] = new int[b];

	/*for(int i = 0; i<a; i++){
		for(int k=0; k<b; k++){
			m[i][k]= 0;
			std::cout<<std::setw(3)<< m[i][k];
		};
		std::cout<< "\n";
	};*/
	
	int num = (a<b?a:b)/2+a%2;
	
	a--;
	b--;
	for(int i = num-1 ; i>=0 ; --i){
		for(int k = i; k<=b-i; k++){
			m[i][k] = i+1;
			m[a-i][k] = i+1;
		};
		for(int k = i+1; k<a-i; k++){
			m[k][i] = i+1;
			m[k][b-i] = i+1;
		};
	};
	a++;
	b++;
	
	std::cout<< "\n";
	for(int i = 0; i<a; i++){
		for(int k=0; k<b; k++){
			std::cout<<std::setw(3)<< m[i][k];
		};
		std::cout<< "\n";
	};
	
	for(int i = 0; i<a; i++) 
		delete [] m[i];
	delete [] m;
    return 0;
}
