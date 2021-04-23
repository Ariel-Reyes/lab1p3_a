#include <iostream>
using namespace std;

int main() {

	int opcion=0;
	while(opcion!=4) {
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


				/*for(int i=0; i<n; i++) {
					
                     if(i%2==0){
                     		for(int j=0; j<n; j++) {
						if(j%2==0) {
							cout<<"0";
						} else {
							cout<<"1";

						}
					}
					cout<<endl; 
					
					 } else{
					 			for(int j=0; j<n; j++) {
						if(j%2==0) {
							cout<<"1";
						} else {
							cout<<"0";

						}
					}
					cout<<endl; 
					 }
				
				} */
				int i =0; 
				while(i<n){
					
					if(i%2==0){
						int j=0; 
						while(j<n){
							if(j%2==0){
								cout<<"0"; 
							}else{
								cout<<"1"; 
							}
							j++;
						}
						cout<<endl; 
						
					} else {
						int z=0; 
						while(z<n){
							if(z%2==0){
								cout<<"1"; 
							}else{
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

				break;
			}

			case 3: {

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