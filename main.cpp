#include <iostream>
using namespace std;

int main() {

	int opcion=0;
	while(opcion!=4) {
		cout<<endl; 
		cout<<".........Menu............."<<endl;
		cout<<"1....................Tablero "<<endl;
		cout<<"2....................Sumatoria"<<endl;
		cout<<"3....................Iteraciones"<<endl;
		cout<<"4....................Salir"<<endl;

		cin>>opcion;
		switch(opcion) {
			case 1: {

				int n;
				cout<<"Ingrese el valor de N: "<<endl;
				cin>>n;

				int i =0;
				while(i<n) {

					if(i%2==0) {
						int j=0;
						while(j<n) {
							if(j%2==0) {
								cout<<"0";
							} else {
								cout<<"1";
							}
							j++;
						}
						cout<<endl;

					} else {
						int z=0;
						while(z<n) {
							if(z%2==0) {
								cout<<"1";
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
                  int i=1;
                  double acu =0; 
                  while(i<=n){
                  	double formula = (2*i) * (i-1);
                  	acu = acu + formula; 
                  	i++;
				  }
				  cout<<"El resultado es: "<<acu; 
                  
                  
                  
				break;
			}

			case 3: {
				int n,t; 
				cout<<"Ingrese el valor de N: "<<endl;
				cin>>n; 
				cout<<"Ingrese el valor de T: "<<endl; 
				cin>>t; 

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