# include <iostream>
# include <cmath>

using std::cout;
using std::cin;
using std::endl;

double euler(int x);
int factorial(int x);
int distancia(int x1, int y1, int x2, int y2);
int altura (int a, int b, int c, int s, int d);
int semiperimetro(int a, int b, int c);
int perimetro (int a, int b, int c, int d);

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
			float x1,y1,x2,y2,x3,y3,x4,y4;
			bool seguir = true;
			while (seguir){
				seguir = false;
				cout << "Ingrese x1: ";
				cin >> x1;
				cout << "Ingrese y1: ";
				cin >> y1;
				cout << "Ingrese x2: ";
				cin >> x2;
				cout << "Ingrese y2: ";
				cin >> y2;
				cout << "Ingrese x3: ";
				cin >> x3;
				cout << "Ingrese y3: ";
				cin >> y3;
				cout << "Ingrese x4: ";
				cin >> x4;
				cout << "Ingrese y4: ";
				cin >> y4;
				if (x1 == x2 && x1 == x3 && x1 == x4 && y1 == y2 && y1 == y3 && y1 == y4){
					cout << "Los puntos no pueden estar uno encima del otro" << endl;	
					seguir = true;		
				}
				if (y1 == y2 && y1 == y3 && y1 == y4){
					cout << "Los puntos no pueden estar en la misma fila" << endl;		
					seguir = true;
				}
				if (x1 == x2 && x1 == x3 && x1 == x4){
					cout << "Los puntos no pueden estar en la misma fila" << endl;
					seguir = true;		
				}
			}
			int dist1,dist2,dist3,dist4,dist5;
			dist1 = distancia(x1,y1,x4,y4);
			dist2 = distancia(x1,y1,x2,y2);
			dist3 = distancia(x2,y2,x4,y4);
			dist4 = distancia(x1,y1,x3,y3);
			dist5 = distancia(x3,y3,x4,y4);
			int h1,h2,h3,h4,h5,h6;
			int semi1,semi2;
			semi1 = semiperimetro(dist1, dist2, dist3);
			h1 = altura(dist1, dist2,dist3,semi1,dist1);
			h2 = altura(dist1, dist2,dist3,semi1,dist1);
			h3 = altura(dist1, dist2,dist3,semi1,dist1);
			h4 = altura(dist1, dist2,dist3,semi1,dist1);
			h5 = altura(dist1, dist2,dist3,semi1,dist1);
			h6 = altura(dist1, dist2,dist3,semi1,dist1);
			
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
int distancia(int x1, int y1, int x2, int y2){
	int distancia;
	x1 = x2 - x1;
	y1 = y2 - y1;
	x1 = pow(x1,2);
	y1 = pow(y1,2);
	x1 = x1 + y1;
	distancia = sqrt(x1);
}
int altura (int a, int b, int c, int s, int d){
	int alt;
	alt = (2/d)*(sqrt(s*(s-a)*(s-b)*(s-c)));
	return d;
}
int semiperimetro(int a, int b, int c){
	int semi;
	semi = (a+b+c)/2;
}
int perimetro (int a, int b, int c, int d){
	int suma = a + b + c + d;
	return suma;
}
int area (int a, int b, int c){
	int ar;
	ar = ((a*b)/2)+((a*c)/2);
}
