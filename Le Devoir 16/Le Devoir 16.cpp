#include<iostream>
#include<cstdlib>
#include<ctime>

int main() {
	setlocale(LC_ALL, "Russian");
	// ������ 1.
	std::cout << "������ 1.\n";
	const int cente = 10;
	int bloc[cente];
	srand(time(NULL));
	int compte = 0;
	double som = 0;
	for (int i = 0; i < cente; i++) {
		bloc[i] = rand() % 100;
		std::cout << bloc[i] << ' ';
	}
	for (int i = 0; i < cente; i++) 
			som += bloc[i];
	double k = som / cente;
	for (int i = 0; i < cente; i++)
		if(bloc[i] <= k)
			compte++;
	std::cout << "\n������� �������������� : " << k << '\n';
	std::cout << "���������� ��������� ������ �������� ��������������� : " << compte << '\n';

	// ������ 2.
	std::cout << "\n������ 2.\n";
	const int cinq = 5;
	int ter1[cinq][cinq];
	int ter2[cinq][cinq];
	int monde[cinq][cinq];
	srand(time(NULL));
	std::cout << "\n������ ������ : \n";
	for (int i = 0; i < cinq; i++) {
		for (int j = 0; j < cinq; j++) {
			ter1[i][j] = rand() % 41 - 20;
			std::cout << '\t' << ter1[i][j] << '\t';
		}
		std::cout << '\n';
	}
	std::cout << "\n������ ������ : \n";
	for (int i = 0; i < cinq; i++) {
		for (int j = 0; j < cinq; j++) {
			ter2[i][j] = rand() % 41 - 20;
			std::cout << "\t" << ter2[i][j] << "\t";
		}
		std::cout << '\n';
	}
	std::cout << "\n����� �������� : \n";
	for (int i = 0; i < cinq; i++) {
		for (int j = 0; j < cinq; j++) {
			monde[i][j] = ter1[i][j]+ter2[i][j];
			std::cout << '\t' << monde[i][j] << '\t';
		}
		std::cout << '\n';
	}

	// ������ 3.
	std::cout << "\n������ 3.\n";
	std::cout << "������� ������������ ����� : ";
	int cifra;
	int mil = 100000;
	std::cin >> cifra;
	const int sei = 6;
	int suolo[sei];
	std::cout << '\n';
	int cifraA = cifra;
	if ((cifra < 1000000 && cifra>99999) || (cifra > (-1000000) && cifra < (-99999)))
		for (int i = 0; i < sei; i++) {
			suolo[i] = cifraA /mil;
			std::cout << suolo[i] << '\t';
			cifraA = cifraA % mil;
			mil /= 10;
			if (cifraA < 0)
				cifraA *= (-1);
		}
	else
		std::cout << "\n������������ ����.\n\n";

	std::cout << "\n\n";
	return 0;
}