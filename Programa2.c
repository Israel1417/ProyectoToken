#include<stdio.h>
#include<stdlib.h>

int main(){

	int	NumUsuario=0;
	int indice=0;
	int indiceCadena=0;
	int sizeIndice=0;
	int sizeUsua=0;
	int sizeUsuaIng=0;
	int sizeContra=0;
	int sizeContraIng=0;

	char usuarioIng[15];
	char contraseniaIng[15];
	
	char usuario[21][15];
	
	usuario[0][0]='I';
	usuario[0][1]='s';
	usuario[0][2]='r';
	usuario[0][3]='a';
	usuario[0][4]='e';
	usuario[0][5]='l';
	usuario[0][6]=00;
	
	usuario[1][0]='R';
	usuario[1][1]='o';
	usuario[1][2]='g';
	usuario[1][3]='e';
	usuario[1][4]='l';
	usuario[1][5]='i';
	usuario[1][6]='o';
	usuario[1][7]=00;
	
	usuario[2][0]='S';
	usuario[2][1]='a';
	usuario[2][2]='n';
	usuario[2][3]='d';
	usuario[2][4]='r';
	usuario[2][5]='a';
	usuario[2][6]=00;
	
	
	usuario[3][0]='A';
	usuario[3][1]='m';
	usuario[3][2]='a';
	usuario[3][3]='y';
	usuario[3][4]='r';
	usuario[3][5]='a';
	usuario[3][6]='n'; 	
	usuario[3][7]='i'; 	
	usuario[3][8]=00;
	
	usuario[4][0]='G';
	usuario[4][1]='u';
	usuario[4][2]='a';
	usuario[4][3]='d';
	usuario[4][4]='a';
	usuario[4][5]='l';
	usuario[4][6]='u';
	usuario[4][7]='p';
	usuario[4][8]='e';
	usuario[4][9]=00;
	
	usuario[5][0]='M';
	usuario[5][1]='i';
	usuario[5][2]='g';
	usuario[5][3]='u';
	usuario[5][4]='e';
	usuario[5][5]='l';
	usuario[5][6]=00;
	
	usuario[6][0]='A';
	usuario[6][1]='r';
	usuario[6][2]='m';
	usuario[6][3]='a';
	usuario[6][4]='n';
	usuario[6][5]='d';
	usuario[6][6]='o';
	usuario[6][7]=00;
	
	usuario[7][0]='S';
	usuario[7][1]='e';
	usuario[7][2]='b';
	usuario[7][3]='a';
	usuario[7][4]='s';
	usuario[7][5]='t';
	usuario[7][6]='i';
	usuario[7][7]='a';
	usuario[7][8]='n';
	usuario[7][9]=00;
	
	usuario[8][0]='K';
	usuario[8][1]='a';
	usuario[8][2]='r';
	usuario[8][3]='i';
	usuario[8][4]='n';
	usuario[8][5]='a';
	usuario[8][6]=00;
	
	usuario[9][0]='P';
	usuario[9][1]='a';
	usuario[9][2]='t';
	usuario[9][3]='r';
	usuario[9][4]='i';
	usuario[9][5]='c';
	usuario[9][6]='i';
	usuario[9][7]='a';
	usuario[9][8]=00;
	
	usuario[10][0]='R';
	usuario[10][1]='o';
	usuario[10][2]='s';
	usuario[10][3]='a';
	usuario[10][4]='l';
	usuario[10][5]='i';
	usuario[10][6]='a';
	usuario[10][7]=00;
	
	usuario[11][0]='A';
	usuario[11][1]='m';
	usuario[11][2]='a';
	usuario[11][3]='n';
	usuario[11][4]='d';
	usuario[11][5]='a';
	usuario[11][6]=00;
	
	usuario[12][0]='J';
	usuario[12][1]='o';
	usuario[12][2]='r';
	usuario[12][3]='g';
	usuario[12][4]='e';
	usuario[12][5]=00;
	
	usuario[13][0]='J';
	usuario[13][1]='u';
	usuario[13][2]='l';
	usuario[13][3]='i';
	usuario[13][4]='o';
	usuario[13][5]=00;
	
	usuario[14][0]='A';
	usuario[14][1]='r';
	usuario[14][2]='n';
	usuario[14][3]='u';
	usuario[14][4]='l';
	usuario[14][5]='f';
	usuario[14][6]='o';
	usuario[14][7]=00;
	
	usuario[15][0]='J';
	usuario[15][1]='o';
	usuario[15][2]='n';
	usuario[15][3]='a';
	usuario[15][4]='t';
	usuario[15][5]='h';
	usuario[15][6]='a';
	usuario[15][7]='n';
	usuario[15][8]=00;
	
	usuario[16][0]='A';
	usuario[16][1]='n';
	usuario[16][2]='g';
	usuario[16][3]='e';
	usuario[16][4]='l';
	usuario[16][5]='e';
	usuario[16][6]='s';
	usuario[16][7]=00;
		
	usuario[17][0]='A';
	usuario[17][1]='l';
	usuario[17][2]='b';
	usuario[17][3]='e';
	usuario[17][4]='r';
	usuario[17][5]='t';
	usuario[17][6]='o';
	usuario[17][7]=00;
	
	usuario[18][0]='L';
	usuario[18][1]='u';
	usuario[18][2]='c';
	usuario[18][3]='i';
	usuario[18][4]='a';
	usuario[18][5]=00;
	
	usuario[19][0]='L';
	usuario[19][1]='o';
	usuario[19][2]='u';
	usuario[19][3]='r';
	usuario[19][4]='d';
	usuario[19][5]='e';
	usuario[19][6]='s';
	usuario[19][7]=00;
	
	char contrasenia[21][15];
	
	contrasenia[0][0]='A';
	contrasenia[0][1]='l';
	contrasenia[0][2]='e';
	contrasenia[0][3]='j';
	contrasenia[0][4]='o';
	contrasenia[0][5]='2';
	contrasenia[0][6]='0';
	contrasenia[0][7]='2';
	contrasenia[0][8]='0';
	contrasenia[0][9]=00;
	
	contrasenia[1][0]='R';
	contrasenia[1][1]='i';
	contrasenia[1][2]='v';
	contrasenia[1][3]='a';
	contrasenia[1][4]='s';
	contrasenia[1][5]='2';
	contrasenia[1][6]='7';
	contrasenia[1][7]=00;
	
	contrasenia[2][0]='C';
	contrasenia[2][1]='u';
	contrasenia[2][2]='i';
	contrasenia[2][3]='n';
	contrasenia[2][4]='a';
	contrasenia[2][5]='9';
	contrasenia[2][6]='2';
	contrasenia[2][7]=00;
	
	contrasenia[3][0]='M';
	contrasenia[3][1]='a';
	contrasenia[3][2]='t';
	contrasenia[3][3]='e';
	contrasenia[3][4]='r';
	contrasenia[3][5]='u';
	contrasenia[3][6]='s';
	contrasenia[3][7]='a';
	contrasenia[3][8]='1';
	contrasenia[3][9]='4';
	contrasenia[3][10]=00;
	
	contrasenia[4][0]='R';
	contrasenia[4][1]='o';
	contrasenia[4][2]='s';
	contrasenia[4][3]='a';
	contrasenia[4][4]='s';
	contrasenia[4][5]='1';
	contrasenia[4][6]='2';
	contrasenia[4][7]=00;
	
	contrasenia[5][0]='M';
	contrasenia[5][1]='i';
	contrasenia[5][2]='k';
	contrasenia[5][3]='e';
	contrasenia[5][4]='y';
	contrasenia[5][5]='M';
	contrasenia[5][6]='o';
	contrasenia[5][7]='u';
	contrasenia[5][8]='s';
	contrasenia[5][9]='e';
	contrasenia[5][10]=00;
	
	contrasenia[6][0]='A';
	contrasenia[6][1]='r';
	contrasenia[6][2]='m';
	contrasenia[6][3]='a';
	contrasenia[6][4]='1';
	contrasenia[6][5]='8';
	contrasenia[6][6]='3';
	contrasenia[6][7]='1';
	contrasenia[6][8]=00;
	
	contrasenia[7][0]='J';
	contrasenia[7][1]='i';
	contrasenia[7][2]='m';
	contrasenia[7][3]='e';
	contrasenia[7][4]='n';
	contrasenia[7][5]='e';
	contrasenia[7][6]='z';
	contrasenia[7][7]='3';
	contrasenia[7][8]='1';
	contrasenia[7][9]='4';
	contrasenia[7][10]=00;
	
	contrasenia[8][0]='G';
	contrasenia[8][1]='o';
	contrasenia[8][2]='n';
	contrasenia[8][3]='z';
	contrasenia[8][4]='a';
	contrasenia[8][5]='l';
	contrasenia[8][6]='2';
	contrasenia[8][7]='2';
	contrasenia[8][8]=00;
	
	contrasenia[9][0]='L';
	contrasenia[9][1]='o';
	contrasenia[9][2]='p';
	contrasenia[9][3]='e';
	contrasenia[9][4]='z';
	contrasenia[9][5]='0';
	contrasenia[9][6]='9';
	contrasenia[9][7]=00;
	
	contrasenia[10][0]='R';
	contrasenia[10][1]='e';
	contrasenia[10][2]='y';
	contrasenia[10][3]='e';
	contrasenia[10][4]='s';
	contrasenia[10][5]='2';
	contrasenia[10][6]='5';
	contrasenia[10][7]='4';
	contrasenia[10][8]='1';
	contrasenia[10][9]=00;
	
	contrasenia[11][0]='I';
	contrasenia[11][1]='s';
	contrasenia[11][2]='l';
	contrasenia[11][3]='a';
	contrasenia[11][4]='s';
	contrasenia[11][5]='2';
	contrasenia[11][6]='7';
	contrasenia[11][7]=00;
	
	contrasenia[12][0]='M';
	contrasenia[12][1]='o';
	contrasenia[12][2]='r';
	contrasenia[12][3]='a';
	contrasenia[12][4]='0';
	contrasenia[12][5]='1';
	contrasenia[12][6]=00;
	
	contrasenia[13][0]='R';
	contrasenia[13][1]='o';
	contrasenia[13][2]='d';
	contrasenia[13][3]='r';
	contrasenia[13][4]='i';
	contrasenia[13][5]='g';
	contrasenia[13][6]='u';
	contrasenia[13][7]='e';
	contrasenia[13][8]='z';
	contrasenia[13][9]='4';
	contrasenia[13][10]='8';
	contrasenia[13][11]=00;
	
	contrasenia[14][0]='M';
	contrasenia[14][1]='o';
	contrasenia[14][2]='r';
	contrasenia[14][3]='a';
	contrasenia[14][4]='l';
	contrasenia[14][5]='8';
	contrasenia[14][6]='2';
	contrasenia[14][7]='9';
	contrasenia[14][8]=00;
	
	contrasenia[15][0]='E';
	contrasenia[15][1]='n';
	contrasenia[15][2]='r';
	contrasenia[15][3]='i';
	contrasenia[15][4]='q';
	contrasenia[15][5]='u';
	contrasenia[15][6]='e';
	contrasenia[15][7]='z';
	contrasenia[15][8]='1';
	contrasenia[15][9]='4';
	contrasenia[15][10]=00;
	
	contrasenia[16][0]='R';
	contrasenia[16][1]='o';
	contrasenia[16][2]='b';
	contrasenia[16][3]='l';
	contrasenia[16][4]='e';
	contrasenia[16][5]='s';
	contrasenia[16][6]='0';
	contrasenia[16][7]='7';
	contrasenia[16][8]=00;
	
	contrasenia[17][0]='C';
	contrasenia[17][1]='a';
	contrasenia[17][2]='m';
	contrasenia[17][3]='p';
	contrasenia[17][4]='o';
	contrasenia[17][5]='s';
	contrasenia[17][6]='2';
	contrasenia[17][7]='0';
	contrasenia[17][8]=00;
	
	contrasenia[18][0]='T';
	contrasenia[18][1]='a';
	contrasenia[18][2]='l';
	contrasenia[18][3]='a';
	contrasenia[18][4]='m';
	contrasenia[18][5]='a';
	contrasenia[18][6]='n';
	contrasenia[18][7]='t';
	contrasenia[18][8]='e';
	contrasenia[18][9]='9';
	contrasenia[18][10]='8';
	contrasenia[18][11]=00;
	
	contrasenia[19][0]='R';
	contrasenia[19][1]='o';
	contrasenia[19][2]='m';
	contrasenia[19][3]='e';
	contrasenia[19][4]='r';
	contrasenia[19][5]='o';
	contrasenia[19][6]='2';
	contrasenia[19][7]='0';
	contrasenia[19][8]=00;
	
	
	char fechaNacimiento[21][15];
	
	fechaNacimiento[0][0]='1';
	fechaNacimiento[0][1]='7';
	fechaNacimiento[0][2]='0';
	fechaNacimiento[0][3]='2';
	fechaNacimiento[0][4]='8';
	fechaNacimiento[0][5]='7';
	fechaNacimiento[0][6]=00;
	
	fechaNacimiento[1][0]='2';
	fechaNacimiento[1][1]='4';
	fechaNacimiento[1][2]='0';
	fechaNacimiento[1][3]='6';
	fechaNacimiento[1][4]='8';
	fechaNacimiento[1][5]='6';
	fechaNacimiento[1][6]=00;
	
	fechaNacimiento[2][0]='0';
	fechaNacimiento[2][1]='1';
	fechaNacimiento[2][2]='0';
	fechaNacimiento[2][3]='9';
	fechaNacimiento[2][4]='9';
	fechaNacimiento[2][5]='2';
	fechaNacimiento[2][6]=00;
	
	fechaNacimiento[3][0]='0';
	fechaNacimiento[3][1]='4';
	fechaNacimiento[3][2]='1';
	fechaNacimiento[3][3]='2';
	fechaNacimiento[3][4]='1';
	fechaNacimiento[3][5]='4';
	fechaNacimiento[3][6]=00;
		
	fechaNacimiento[4][0]='1';
	fechaNacimiento[4][1]='2';
	fechaNacimiento[4][2]='1';
	fechaNacimiento[4][3]='2';
	fechaNacimiento[4][4]='9';
	fechaNacimiento[4][5]='2';
	fechaNacimiento[4][6]=00;
	
	fechaNacimiento[5][0]='2';
	fechaNacimiento[5][1]='1';
	fechaNacimiento[5][2]='0';
	fechaNacimiento[5][3]='7';
	fechaNacimiento[5][4]='8';
	fechaNacimiento[5][5]='9';
	fechaNacimiento[5][6]=00;
	
	fechaNacimiento[6][0]='2';
	fechaNacimiento[6][1]='6';
	fechaNacimiento[6][2]='1';
	fechaNacimiento[6][3]='0';
	fechaNacimiento[6][4]='9';
	fechaNacimiento[6][5]='4';
	fechaNacimiento[6][6]=00;
	
	fechaNacimiento[7][0]='1';
	fechaNacimiento[7][1]='4';
	fechaNacimiento[7][2]='0';
	fechaNacimiento[7][3]='2';
	fechaNacimiento[7][4]='8';
	fechaNacimiento[7][5]='5';
	fechaNacimiento[7][6]=00;
	
	fechaNacimiento[8][0]='0';
	fechaNacimiento[8][1]='2';
	fechaNacimiento[8][2]='0';
	fechaNacimiento[8][3]='4';
	fechaNacimiento[8][4]='8';
	fechaNacimiento[8][5]='7';
	fechaNacimiento[8][6]=00;
	
	fechaNacimiento[9][0]='1';
	fechaNacimiento[9][1]='0';
	fechaNacimiento[9][2]='0';
	fechaNacimiento[9][3]='5';
	fechaNacimiento[9][4]='8';
	fechaNacimiento[9][5]='4';
	
	fechaNacimiento[10][0]='2';
	fechaNacimiento[10][1]='4';
	fechaNacimiento[10][2]='0';
	fechaNacimiento[10][3]='7';
	fechaNacimiento[10][4]='9';
	fechaNacimiento[10][5]='5';
	fechaNacimiento[10][6]=00;
	
	fechaNacimiento[11][0]='1';
	fechaNacimiento[11][1]='1';
	fechaNacimiento[11][2]='1';
	fechaNacimiento[11][3]='0';
	fechaNacimiento[11][4]='9';
	fechaNacimiento[11][5]='0';
	fechaNacimiento[11][6]=00;
	
	fechaNacimiento[12][0]='2';
	fechaNacimiento[12][1]='0';
	fechaNacimiento[12][2]='1';
	fechaNacimiento[12][3]='1';
	fechaNacimiento[12][4]='9';
	fechaNacimiento[12][5]='1';
	fechaNacimiento[12][6]=00;
	
	fechaNacimiento[13][0]='0';
	fechaNacimiento[13][1]='9';
	fechaNacimiento[13][2]='0';
	fechaNacimiento[13][3]='1';
	fechaNacimiento[13][4]='9';
	fechaNacimiento[13][5]='3';
	fechaNacimiento[13][6]=00;
	
	fechaNacimiento[14][0]='0';
	fechaNacimiento[14][1]='6';
	fechaNacimiento[14][2]='0';
	fechaNacimiento[14][3]='3';
	fechaNacimiento[14][4]='9';
	fechaNacimiento[14][5]='0';
	fechaNacimiento[14][6]=00;
	
	fechaNacimiento[15][0]='2';
	fechaNacimiento[15][1]='9';
	fechaNacimiento[15][2]='0';
	fechaNacimiento[15][3]='8';
	fechaNacimiento[15][4]='8';
	fechaNacimiento[15][5]='9';
	fechaNacimiento[15][6]=00;
	
	fechaNacimiento[16][0]='0';
	fechaNacimiento[16][1]='4';
	fechaNacimiento[16][2]='0';
	fechaNacimiento[16][3]='2';
	fechaNacimiento[16][4]='9';
	fechaNacimiento[16][5]='2';
	fechaNacimiento[16][6]=00;
	
	fechaNacimiento[17][0]='1';
	fechaNacimiento[17][1]='4';
	fechaNacimiento[17][2]='0';
	fechaNacimiento[17][3]='7';
	fechaNacimiento[17][4]='9';
	fechaNacimiento[17][5]='1';
	fechaNacimiento[17][6]=00;
	
	fechaNacimiento[18][0]='2';
	fechaNacimiento[18][1]='1';
	fechaNacimiento[18][2]='1';
	fechaNacimiento[18][3]='2';
	fechaNacimiento[18][4]='9';
	fechaNacimiento[18][5]='4';
	fechaNacimiento[18][6]=00;
		
	fechaNacimiento[19][0]='3';
	fechaNacimiento[19][1]='0';
	fechaNacimiento[19][2]='0';
	fechaNacimiento[19][3]='5';
	fechaNacimiento[19][4]='8';
	fechaNacimiento[19][5]='8';
	fechaNacimiento[19][6]=00;


	
	printf("_________________________________\n");
	printf("\nIngresa tu nombre de usuario: ");
	scanf("%s", &usuarioIng);
	
	printf("__________________________________\n");
	printf("\nIngresa tu contrase%ca: ", 164);
	scanf("%s", &contraseniaIng);
	

	
	while(usuario[NumUsuario][indice]!=0){//Obtenemos el tamaño del arreglo
		NumUsuario++;
	}
	
	while(usuarioIng[sizeUsuaIng] != 0){//Obtenemos el tamaño de la cadena usuario ingresado
		sizeUsuaIng++;
	}
 		
	while(contraseniaIng[sizeContraIng] != 0){//Obtenemos el tamaño de la cadena contraseña ingresada
		sizeContraIng++;
	}
	

	for(indice=0; indice<NumUsuario; indice++){//Itero sobre el tamaño existente de mi arreglo usuario
	
		sizeUsua=0;
		while(usuario[indice][sizeUsua] != 0){//Obtenemos el tamaño de la cadena usuario existente
			sizeUsua++;
		}
	
		sizeContra= 0;
		while(contrasenia[indice][sizeContra] != 0){//Obtenemos el tamaño de la contraseña existente
			sizeContra++;
		}
	
		if(sizeUsua!=sizeUsuaIng || sizeContra!=sizeContraIng){//Comparamos el tamaño usuario existente con el usuario ingresado
			printf("");
			
		}else{//Iniciamos la comparación del usuario existente con el usuario ingresado
			
			while((usuario[indice][indiceCadena]  == usuarioIng[indiceCadena]) && indiceCadena < sizeUsua){ //Comparamos la igualdad del usuario con usuario ingresado mientras que el indice sea menor al tamaño de la cadena usuario
				indiceCadena++;
			}
					
			if(indiceCadena!=sizeUsua){
				printf("\nDatos de acceso incorrectos");
			
			}else{//Inciamos comparación de contraseña
				indiceCadena=0;
				while((contrasenia[indice][indiceCadena] == contraseniaIng[indiceCadena]) && indiceCadena < sizeContra){ //Comparamos la igualdad de la contraseña existente con la contraeña ingresada mientras que el indiceCadena sea menor al tamaño de la cadena contraseña
					indiceCadena++;
					
				}
			
				if(indiceCadena != sizeContra){//Si la contaseña es distinta en caracteres y tamaño
					printf("\nDatos de acceso incorrectos\n");
				
				}else{
					
					printf("\nBienvenido");
					break;
				}		
			}
		}
	}
return 0;

}


