#include <iostream>
#include <ctime>

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	

	int mr[10][10]{};
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			mr[i][j] = rand() % (100+1);
			std::cout << mr[i][j] << '\t';
		}
		std::cout << std::endl;
	}
	
	for (int i = 0; i < 10; i++) {
		int sum = 0;
		for (int j = 0; j < 10; j++) {
			sum += mr[i][j];
		}
			std::cout << "Сумма " << i << " строки = " << sum << '\n';	
			std::cout << std::endl;
		}
	
	std::cout << "Введите номер строки -> ";
	std::cin >> n;
	int tmp;
		for (int j = 0, i = n; j < 9; j++) 
			for (int k = j; k < 10; k++) 
				if (mr [i][j] > mr [i][k]) 
				{ 
					tmp = mr [i][j]; 
					mr [i][j] = mr [i][k]; 
					mr [i][k] = tmp; 
				}

		for (int j = 0, i = n; j < 10; j++)
		std:: cout << mr [i][j] << '\t'; 
		std::cout << std::endl;
	
	return 0;
}