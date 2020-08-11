//librerias
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void loop(char c[3][3]);
void intro_numeros(char c[3][3]);
void tablero(char c[3][3]);
void intro_valores(char c[3][3]);
 using namespace std;
 int main(){
 	char c[3][3]; //tablero del juego
 	loop(c);//lamada de la funcion refresco de pantalla
 	return 0;
 }
 
 void loop(char c[3][3]){
 	intro_numeros(c);
 	tablero(c);
 	intro_valores(c);
 	tablero(c);
 	
 }
 void intro_numeros(char c[3][3]){
 	char aux='1';
	 for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 		c[i][j]=aux++;
		 }
	 }
 	
 }
 void tablero(char c[3][3]){
 	
 	for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 			if(j<2){
 				cout<<" "<<c[i][j]<<"/";
			 }else{ 
			 cout<<" "<<c[i][j];
			 }
			 
		 }
		 if(i<2){
		 	cout<<endl<<"--------"<<endl;
		 }
	 }
 }
 void intro_valores(char c[3][3]){
 	char aux;
 	int k;
 	cin>>aux;
 	
 	do{
 		do{
 			cout<<"Coloca una ficha: "
 			cin>>aux;
		 }while(aux<1||aux>9);
		 k=0;
		 for(int i=0;i<3;i++){
		 	for(int j=0;j<3;j++){
		 		if(c[i][j]=='X'||c[i][j]=='O'){
		 		k==1;
				 cout<<"la casilla esta ocupada "<<endl;	
				 }
				 
			 }
		 }
		 
	 }while(k==1);
 	
 }
