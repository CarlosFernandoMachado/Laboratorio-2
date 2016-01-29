# include <iostream>
# include <cmath>

using std::cout;
using std::cin;
using std::endl;

double euler(int x);
int factorial(int x);
int main(int argc, char*argv[]){
	char menu;
	int menus;
	bool centinela = true;
	while (centinela){
		cout << "1: Ejercicio 1" << endl << "2: Ejercicio 2" << endl;
		cin >> menus;
		if (menus == 1){
			int potencia;
			cout << "Escriba un numero: ";
			cin >> potencia;
			cout << euler(potencia) << endl;
		}
		if (menus == 2){
			float x1,y1,x2,y2,x3,y3
		}
		cout << "Desea salir [y/n]" << endl;
		cin >> menu;
		if(menu == 'y'){
			centinela = false;
		}
	}
	
	return 0;
}

double euler(int x){
	long long int resp;
	for (int i = 0; i < 14; i++){
		if (i == 0){
			resp += 1;
		}else{
			resp += pow(x,i)/factorial(i);
		}		
	}
	return resp;
}
int factorial(int x){
	int acumulador = 1;
	if (x == 0){
		return 1;
	}
	for (int i = 1; i < x + 1; i++){
		acumulador *= i;
	}
	return acumulador;
}
