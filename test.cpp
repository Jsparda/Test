#include <iostream>
using namespace std;

int main(){

	int val1, val2, val3;
	//std::cout << "hello world";
	cout << "Dame el  numero de horas: ";
	cin >> val1;
	cout << "Dame un valor (precio por hora): ";
	cin >> val3; 
	//cout << "El resultado es " << val1+val2+val3 << ".\n";
	if(val1 < 40){
		cout << "las horas se multiplican por el salario "
		<< val1*val3 << ".\n";
		//operaciones aqui
	}
	else if(val1 >= 40){
		cout << "introduce las horas extraordinarias: ";
		cin >> val2;
		cout << "tu salario mas tus horas extras \n";
		//horas-horasExtras*precioPorHora -> salario
		//horasExtras*(salario*1.5) -> salarioExtra
		//salarioTotal=salario+salarioExtra
	}

	return 0;
}
