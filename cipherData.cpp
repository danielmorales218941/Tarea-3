#include <iostream>
using namespace std;
void cipherData(int trama[20], int rondas){
	int copia[20];
	int respuesta[20];
		for(int i=0;i<20;i++){
			copia[i]=trama[i];
		}
		for(int i=0;i<rondas;i++){
			for(int j=0;j<20;j++){
				
				if(j==0){
					respuesta[j]=copia[19]-copia[1];
				}
				else if(j==19){
					respuesta[j]=copia[18]-copia[0];
				}
				else if(j%2==0){
					respuesta[j]=copia[j-1]-copia[j+1];
				}
				else{
					respuesta[j]=copia[j-1]+copia[j+1];
				}
			}
			for(int k=0;k<20;k++){
				copia[k]=respuesta[k];
			}
		}
		cout<<"Trama final:"<<endl;
		for(int i=0;i<20;i++){
			cout<<respuesta[i]<<": ";
		}		
	}
