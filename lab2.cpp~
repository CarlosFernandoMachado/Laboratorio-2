# include <iostream>
# include <cmath>

using std::cout;
using std::cin;
using std::endl;

double euler(int x);
int factorial(int x);
double distancia(double x1, double y1, double x2, double y2);
double altura (double a, double b, double c, double s, double d);
double semiperimetro(double a, double b, double c);
double perimetro (double a, double b, double c, double d);
double area (double a, double b, double c);

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
			cout << "(" << x1 << "," << y1 << ")" << endl;
			cout << "(" << x2 << "," << y2 << ")" << endl;
			cout << "(" << x3 << "," << y3 << ")" << endl;
			cout << "(" << x4 << "," << y4 << ")" << endl;
			cout << "Los lados del trapezoide son: " << endl;
			double dist1,dist2,dist3,dist4,dist5;
			dist1 = distancia(x1,y1,x4,y4);
			dist2 = distancia(x1,y1,x2,y2);
			dist3 = distancia(x2,y2,x4,y4);
			dist4 = distancia(x1,y1,x3,y3);
			dist5 = distancia(x3,y3,x4,y4);
			cout << "Lado 1: " << dist2 << endl;
			cout << "Lado 2: " << dist3 << endl;
			cout << "Lado 3: " << dist4 << endl;
			cout << "Lado 4: " << dist5 << endl;
			cout << "Los lados del triangulos 1 son: " << endl;
			cout << "Lado 1: " << dist2 << endl;
			cout << "Lado 2: " << dist3 << endl;
			cout << "Lado 3: " << dist1 << endl;
			cout << "Los lados del triangulos 2 son: " << endl;
			cout << "Lado 1: " << dist4 << endl;
			cout << "Lado 2: " << dist5 << endl;
			cout << "Lado 3: " << dist1 << endl;
			double h1,h2,h3,h4,h5,h6;
			double semi1,semi2;
			semi1 = semiperimetro(dist1, dist2, dist3);
			semi2 = semiperimetro(dist1, dist4, dist5);
			h1 = altura(dist1, dist2,dist3,semi1,dist1);
			h2 = altura(dist1, dist2,dist3,semi1,dist2);
			h3 = altura(dist1, dist2,dist3,semi1,dist3);
			h4 = altura(dist1, dist4,dist5,semi2,dist1);
			h5 = altura(dist1, dist5,dist5,semi2,dist5);
			h6 = altura(dist1, dist5,dist5,semi2,dist4);
			cout << "El semiperimetro del triangulo 1: " << semi1 << endl;
			cout << "El semiperimetro del triangulo 2: " << semi2 << endl;
			cout << "El perimetro del triangulo 1: " << dist1+dist2+dist3 << endl;
			cout << "El perimetro del triangulo 1: " << dist1+dist4+dist5 << endl;
			cout << "Las alturas del triangulo 1 son: " << endl;
			cout << "Lado 1: " << h1 << endl;
			cout << "Lado 2: " << h2 << endl;
			cout << "Lado 3: " << h3 << endl;
			cout << "Las alturas del triangulo 2 son: " << endl;
			cout << "Lado 1: " << h4 << endl;
			cout << "Lado 2: " << h5 << endl;
			cout << "Lado 3: " << h6 << endl;
			double areeea = area(dist1,h1,h4);
			cout << "El area del trapezoide es de: " << areeea << endl;
			
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
double distancia(double x1, double y1, double x2, double y2){
	double distancia;
	x1 = x2 - x1;
	y1 = y2 - y1;
	x1 = pow(x1,2.0);
	y1 = pow(y1,2.0);
	x1 = x1 + y1;
	distancia = sqrt(x1);
	return distancia*1.0;
}
double altura (double a, double b, double c, double s, double d){
	double alt;
	alt = (2.0/d)*(sqrt(s*(s-a)*(s-b)*(s-c)));
	return alt*1.0;
}
double semiperimetro(double a, double b, double c){
	double semi;
	semi = (a+b+c)/2.0;
	return semi*1.0;
}
double perimetro (double a, double b, double c, double d){
	double suma = a + b + c + d;
	return suma*1.0;
}
double area (double a, double b, double c){
	double ar;
	ar = ((a*b)/2.0)+((a*c)/2.0);
	return ar*1.0;
}
