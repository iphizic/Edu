#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
int main()
{
	int a=11;
	int b=11;
	std::string filename;
	std::cout<<"Введите имя файла>";
	std::cin>>filename;
	std::ofstream fout(filename);
	std::cout<<"Введите длинну поля>";
	std::cin>>a;
	std::cout<<"Введите ширину поля>";
	std::cin>>b;
	int **m = new int *[a];
	for(int i = 0; i<a; i++) 
		m[i] = new int[b];
	int num = (a<b?a:b)/2+a%2;
	
	a--;
	b--;
	for(int i = num ; i>=0 ; --i){
		for(int k = i; k<=b-i; k++){
			m[i][k] = i+1;
			m[a-i][k] = i+1;
		};
		for(int k = i; k<=a-i; k++){
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
			fout<<std::setw(3)<< m[i][k];
		};
		std::cout<< "\n";
		fout<<"\n";
	};
	
	fout.close();

	std::cout<<"Запись в файл "<<filename<<" окончена."<<"\n";

	for(int i = 0; i<a; i++) 
		delete [] m[i];
	delete [] m;
    return 0;
}
