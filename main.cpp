#include <iostream>
using namespace std;
// Ariel Fernando Reyes Castellanos (11912023)
int main() {

	int opcion=0;
	while(opcion!=4) {
		cout<<endl;
		/*Creacion del menu*/
		cout<<".........Menu............."<<endl;
		cout<<"1....................Tablero "<<endl;
		cout<<"2....................Sumatoria"<<endl;
		cout<<"3....................Iteraciones"<<endl;
		cout<<"4....................Salir"<<endl;
		cout<<"Ingrese la opcion que desea: "<<endl;

		cin>>opcion;
		switch(opcion) {
			case 1: {

				int n;
				cout<<"Ingrese el valor de N: "<<endl;
				cin>>n;
				while(n<=0) {
					cout<<"Ingrese numeros positivos y mayores que 0: "<<endl;
					cin>>n;
				}


				int i =0;
				while(i<n) { // se recorre el ciclo while con forme al numero ingresador por el usuario

					if(i%2==0) { // validamos si el numero en i es par
						int j=0;
						while(j<n) { // hacemos un while anidado para que pueda recorrer todos los numeros y valla dejando parte del tablero
							if(j%2==0) {
								cout<<"0";
							} else {
								cout<<"1";
							}
							j++; // aumentamos j
						}
						cout<<endl;

					} else {
						int z=0;
						while(z<n) { // hacemos el mismo proceso pare aca lo tomara con los numero impares
							if(z%2==0) {
								cout<<"1"; // imprimimos 1 primero para los colores
							} else {
								cout<<"0";
							}
							z++;
						}
						cout<<endl;
					}


					i++;

				}
				break;
			}

			case 2: {
				int n;
				cout<<"Ingrese el valor de N: "<<endl;
				cin>>n;
				while(n<=0) { // validamos la entrada
					cout<<"Ingrese numeros positivos y mayores que 0: "<<endl;
					cin>>n;
				}
				int i=1;
				double acu =0;
				while(i<=n) {
					double formula = (2*i) * (i-1); // creamos la formula
					acu = acu + formula; // acumulamos los valores
					i++;
				}
				cout<<"El resultado es: "<<acu; // imprimimos el resultado



				break;
			}

			case 3: {
				double n;
				int t;
				double principio=0,fin;
				cout<<"Ingrese el valor de N: "<<endl;
				cin>>n;
				fin = n; // fin toma el valor de N
				cout<<"Ingrese el valor de T: "<<endl;
				cin>>t;
				while((n< 1 || t<=0) || t<=10) { // validamos las entradas que el usuario haga
					cout<<"Ingrese valores positivos y mayores que 0, o T mayor a 10"<<endl;
					cout<<"Ingrese el valor de N: "<<endl;
					cin>>n;
					cout<<"Ingrese el valor de T: "<<endl;
					cin>>t;
				}
				// formula: (final - inicio/ 2) + inicio
				double formula_part_uno=0; // creamos la parte de la fraccion del ejercicio
				double cuadrado=0;
				double formula_part_final =0; // aca sera para sumar principio
				int i=0;
				while(i<=t) { // con este while iremos recorriendo hasta llegar al valor de t
					formula_part_uno = (fin - principio)/2;
					formula_part_final = formula_part_uno + principio;
					cuadrado = formula_part_final * formula_part_final; // hacemos la multiplicacion para elevar a la 2
					/*validaciones para saber si el resultado que se eleva es mayor a N*/
					if(cuadrado<n) {
						principio = formula_part_final;
					}
					if(cuadrado>n) {
						fin = formula_part_final;

					}
					i++;
				}

				cout<<"La respuesta es: "<<formula_part_final;

				break;
			}

			case 4: {
				cout<<"adios...."<<endl;
				break;
			}
			default: {
				cout<<"Esta opcion no existe"<<endl;
				break;
			}
		}


	}
	return 0;
}