#include <iostream>
#include <iomanip>

int main()
{
	int a=6;
	int b=9;
	int **m = new int *[a];
	for(int i = 0; i<a; i++) 
		m[i] = new int[b];

	for(int i = 0; i<a; i++){
		for(int k=0; k<b; k++){
			m[i][k]= k==0?i+1:k+1;
			std::cout<<std::setw(3)<< m[i][k];
		};
		std::cout<< "\n";
	};
	
	b--;
	for(int i = 0; i<a ; i++)
		for(int k = 0; k<b/2; k++){
		int buf = m[i][k];
		m[i][k] = m[i][b-k];
		m[i][b-k] = buf;
		};
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
