#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;
int main(int argc, char *argv[]) {
	srand (time(NULL));
	int valor1;
	int valor2;
	int valor3;
	int monedasIngresadas;
	int intentos =0;
	int contadorGanadas = 0;
	
	cout << "===============================" <<endl;
	cout << "BIENVENIDO" <<endl;
	cout << "===============================" <<endl;
	cout << "INGRESE SUS MONEDAS (1 A 10): ";
	cin >> monedasIngresadas;
	
	if ( monedasIngresadas >= 0 && monedasIngresadas <=10 )
		cout << endl << "---------PUEDE JUGAR---------- " <<endl;
	cout << "------------------------------" <<endl;
	cout << endl;
	if ( monedasIngresadas <= 0 || monedasIngresadas > 10){
		cout << "SOLO MONEDAS ENTRE 1 A 10";
		return 1;
	}
	
	cout << "===============================";
	cout << endl;
	cout << "TIENE " << monedasIngresadas << " TIRADAS";
	cout << endl;
	cout << "===============================";
	cout << endl;
	cout<<"PULSE LA TECLA p"<<endl;
	
	while (true){
		
		
		if(kbhit()) {
			int tecla=getch();
			
			switch (tecla)
			{
			case 'p':
				for (int i=0 ; i<monedasIngresadas; i++){
					cout<<"TIRADA "<< intentos +1 << endl;
					valor1 = rand ()% 3+1; 
					valor2 = rand()% 3+1; 
					valor3 = rand()% 3+1;
					cout <<endl;
					cout<< "NUMEROS: " << valor1 << ", " << valor2 << ", " << valor3 << endl;
					intentos++;
					
					break;
				}
			}
			if (valor1==valor2 && valor1 == valor3){
				cout << "GANASTE" <<endl;
				contadorGanadas ++;
				
			}
			cout << "HAS GANADO " << contadorGanadas << " VECES" << endl;
			if (intentos>=monedasIngresadas){
				cout<<"FIN DEL JUEGO";
				return 1;
			}
		}
		
	}
		
	
		return 0;
		
	}
