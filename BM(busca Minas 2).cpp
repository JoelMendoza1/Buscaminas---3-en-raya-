//librerias
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//declarar variables
#define x 8//declara el tamaño del cuadro
#define y 8//declara el tamaño del cuadro
#define bombas 10//declara las bombas que vamos a evitar
#define TRUE 1//define si hay bomba
#define FALSE 0//define si no hay bombas

using namespace std;
//prototipos de la funciones
void nombredelprograma();
void ccuadro8x8(int matriz[x][y]);

int main(){
nombredelprograma();



	
	
	return 0;
}
void nombredelprograma(){
	cout<<"Busca Minas"<<endl;
	
	
}

void cuadro8x8(int matriz[x][y]){// funcion para crear el cuadro
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			matriz[i][j]=0;
		}
	}
	
}

void Bombas(int matriz[x][y]){//Funcion para colocar las bombas
  int i,j,k;
  srand(time(NULL));//Llamdas aleatorias de numeros en un determinado tiempo
  for(int k=0; k<bombas; k++){
    do{
      i = rand()%x;//Coloca las bombas en el vector i
      j = rand()%y;//Coloca las bombas en el vector j
      }while( matriz[i][j]!=0 );
       
	matriz[i][j] = 1;
       }
       }
void Cuadro(int m[x][y]){//funcion para crear el cuadro
  MatrizCuadro(m);//lamda de funcion para el cuadro de juego
  Bombas(m);//lamada de fincion para las bombas
  }
  
