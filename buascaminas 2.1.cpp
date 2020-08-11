#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define TRUE 1
#define FALSE 0
#define X 8
#define Y 8
#define BOMBAS 10

//m es el tablero donde tenemos las bombas
//Define X y Y Determina el Tamaño del cuadro
//0 es casilla sin bomba
//1 es casilla con bomba





void MatrizCuadro(int m[X][Y]){//Funcion para crear el cuadro
  int i,j;
  for(i=0; i<X; i++){
    for(j=0; j<Y;j++){
      m[i][j] = 0;
      }
      }
      }

void Bombas(int m[X][Y]){//Funcion para colocar las bombas
  int i,j,k;
  srand(time(NULL));//Llamdas aleatorias de numeros en un determinado tiempo
  for(k=0; k<BOMBAS; k++){
    do{
      i = rand()%X;//Coloca las bombas en el vector i
      j = rand()%Y;//Coloca las bombas en el vector j
      }
      while( m[i][j]!=0 );
       m[i][j] = 1;
       }
       }

void Cuadro(int m[X][Y]){//funcion para crear el cuadro
  MatrizCuadro(m);
  Bombas(m);
  }


int Bomba(int m[X][Y], int x, int y){
  if( x>=0 && x<X ){
    if( y>=0 && y<Y ){
      if( m[x][y]==1 ){
	return TRUE;
	}
	}
	}
	return FALSE;
	}

int AlrededorBombas(int m[X][Y], int x, int y){
  int z;
  z = 0;
  z += Bomba(m,x-1,y);
  z += Bomba(m,x-1,y+1);
  z += Bomba(m,x,y+1);
  z += Bomba(m,x+1,y+1);
  z += Bomba(m,x+1,y);
  z += Bomba(m,x+1,y-1);
  z += Bomba(m,x,y-1);
  z += Bomba(m,x-1,y-1);
  return z;
  }

void imprimir(int m[X][Y]){
  int i,j,k;

  for(i=0; i<X; i++){
    for(j=0; j<Y; j++){
	printf(" \n");
	printf("  %d",AlrededorBombas(m,i,j));
	    }
	      }
	      printf("\n");
	      }


main(){
  int m[X][Y];
  Cuadro(m);
  getch();
  return(0);
}
