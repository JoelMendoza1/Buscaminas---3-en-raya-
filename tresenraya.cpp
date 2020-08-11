//librerias
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void loop(char c[3][3]);
void intro_numeros(char c[3][3]);
void tablero(char c[3][3]);
void intro_valores(char c[3][3]);
void intro_alea(char c[3][3]);
int ganador(c[3][3]);
 using namespace std;
 int main(){
 	char c[3][3]; //tablero del juego
 	loop(c);//lamada de la funcion refresco de pantalla
 	return 0;
 }
 
 void loop(char c[3][3]){
 	intro_numeros(c);
 int i;
 	do{
	 	
		
		 tablero(c);
 		
		 if(i%2==0){
 		intro_valores(c);	
		 }else{	
		intro_alea(c);
		 }
		 
		 cout<<endl;
		 i++;
	 }while(i<=9);
	 
 	
 	
 	
 
 
 	
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
 	int k,j,i;
 	
 	cout<<endl;
 	do{
 		do{
 			cout<<"Coloca una ficha: "<<endl;
 			cin>>aux;
		 }while(aux<'1'||aux>'9');
		 k=0;
		 switch(aux){	
		 case '1':
			
		
		 	j=0;
		 	i=0;
		 if(c[i][j]=='X'||c[i][j]=='O'){
		 		k==1;
				 cout<<"la casilla esta ocupada "<<endl;	
				 }
				 c[i][j]='X';
				 break;
				  case '2':
		 	j=1;
		 	i=0;
		 if(c[i][j]=='X'||c[i][j]=='O'){
		 		k==1;
				 cout<<"la casilla esta ocupada "<<endl;	
				 }
				 c[i][j]='X';
				  break;
				  case '3':
		 	j=2;
		 	i=0;
		 if(c[i][j]=='X'||c[i][j]=='O'){
		 		k==1;
				 cout<<"la casilla esta ocupada "<<endl;	
				 }
				 c[i][j]='X';
				  break;
				  case '4':
		 	j=0;
		 	i=1;
		 if(c[i][j]=='X'||c[i][j]=='O'){
		 		k==1;
				 cout<<"la casilla esta ocupada "<<endl;	
				 }
				 c[i][j]='X';
				  break;
		 case '5':
		 	j=1;
		 	i=1;
		 if(c[i][j]=='X'||c[i][j]=='O'){
		 		k==1;
				 cout<<"la casilla esta ocupada "<<endl;	
				 }
				 c[i][j]='X';
				  break;
				  case '6':
		 	j=2;
		 	i=1;
		 if(c[i][j]=='X'||c[i][j]=='O'){
		 		k==1;
				 cout<<"la casilla esta ocupada "<<endl;	
				 }
				 c[i][j]='X';
				  break;		 
				  case '7':
		 	j=0;
		 	i=2;
		 if(c[i][j]=='X'||c[i][j]=='O'){
		 		k==1;
				 cout<<"la casilla esta ocupada "<<endl;	
				 }
				 c[i][j]='X';
				  break;
				  case '8':
		 	j=1;
		 	i=2;
		 if(c[i][j]=='X'||c[i][j]=='O'){
		 		k==1;
				 cout<<"la casilla esta ocupada "<<endl;	
				 }
				 c[i][j]='X';
				  break;
				  case '9':
		 	j=2;
		 	i=2;
		 if(c[i][j]=='X'||c[i][j]=='O'){
		 		k==1;
				 cout<<"la casilla esta ocupada "<<endl;	
				 }
				 c[i][j]='X';
				 break;	
		 }
		 
		  
				 
			 
		 
		 }while(k==1);
 
 }
 void intro_alea(char c[3][3]){
 int i,j,k;
 
 srand(time(NULL));
 do{
 	j=rand()%3;
 	i=rand()%3;
 	k=0;
 	if(c[i][j]=='X'||c[i][j]=='O'){
 		cout<<"esta ocupadada la casilla"<<endl;
 		k=1;
	 }
 }while(k==1);
 c[i][j]='O';	
 	
 }
 int ganador(c[3][3]){
 	if(c[0][0]=='X'|c[0][0]=='O'){
 		if(c[0][0]==c[0][1]&&c[0][0]==c[0][2]]){
 			if(c[0][0]=='X'){
			 return 0;
			 }else{
		 	return 1;
		 }
	}
		if(c[0][0]==c[1][0]&&c[0][0]==c[2][0]]){
 				if(c[0][0]=='X'){
			 return 0;
			 }else{
		 	return 1;
		 }
	}
		 
		 
		 }
 		
	 }
 	
 	
 }
