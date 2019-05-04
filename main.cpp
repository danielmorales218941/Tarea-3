#include <iostream>
#include <string>
#include <time.h> 
#include<conio.h>
#include <stdlib.h>
#include"cipherData.h"

using namespace std;

int main(int argc, char** argv) {
	
	int trama[20];
	int n = 1;
	
	cout<<"Digite la cantidad de veces que desea cifrar la trama: ";
	cin>>n;
	system("cls");
	
	/************* Crear e imprimrir trama Inicial******************/
	
	cout<<"Trama Original: "<<endl;
	for(int i=0; i<20; i++)
	{
        trama [i] = rand() % 501;
        cout<<trama[i]<<" ";
	}
	
	cout<<endl;
	
	cipherData(trama, n);
	
	getch();
	return 0;
}
