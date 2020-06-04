#include<stdio.h>
#include<stdlib.h>


int main(){
	
	char nomUsuario[10]="Isra";
	char contraUsuario[10]="Alejo2020";
	char usuarioIng[10];
	char contraseniaIng[10];
	
	int indice=0;
	int sizeUsuaIng = 0;
	int sizeUsua = 0;
	int sizeContraUsua=0;
	int sizeContraIng=0;

	
	
	
	printf("_________________________________\n");
	printf("\nIngresa tu nombre de usuario: ");
	scanf("%s", &usuarioIng);
	
	printf("__________________________________\n");
	printf("\nIngresa tu contase%ca: ", 164);
	scanf("%s", &contraseniaIng);
	
	while(nomUsuario[indice] != 0){
		//Obtenemos el tamaño de la cadena usuario
		sizeUsua ++;
		indice++;
	}
		
	indice= 0;
	while(usuarioIng[indice] != 0){
		//Obtenemos el tamaño de la cadena usuario ingresado
		sizeUsuaIng++ ;
		indice++;
	}
	
	
	indice=0;
	while(contraUsuario[indice]!=0){
		//Obtenemos el tamaño de la cadena contraseña de usuario
		sizeContraUsua++;
		indice++;
	}
	
	indice=0;
	while(contraseniaIng[indice]!=0){
		//Obtenemos el tamaño de la cadena contraseña ingresada
		sizeContraIng++;
		indice++;			
	}
	  
	if(sizeUsuaIng != sizeUsua || sizeContraIng != sizeContraUsua){
			//notificamos datos invalidos si no hay correspondencia entre el tamaño de usuario con usuario ingresado y contaseñas.
		printf("\nDatos de acceso incorrectos\n");
	
	}else{
		//Inicia la comparación de usuario contra usuario ingresado
	indice=0;
	while((nomUsuario[indice]  == usuarioIng[indice]) && indice < sizeUsua){ 
		//Comparamos la igualdad del usuario con usuario ingresado mientras que el indice sea menor al tamaño de la cadena usuario
		indice++;
		}
			
		if(indice!=sizeUsua){
		//Si los datos de usuario son incorrectos no compara la contraseña	
		printf("\nTus datos son incorrectos");
				
		}else{
			//Si al terminar el flujo el indice es igual al tamaño de la cadena Usuario procedemos a comparar la contraseña
			indice=0;
			while((contraUsuario[indice]  == contraseniaIng[indice]) && indice < sizeContraIng){ 
			//Comparamos la igualdad del la contraseña de usuario con la contraseña del usuario ingresado mientras que el indice sea menor al tamaño de la cadena contraseña usuario
			indice++;
			}
			if(indice == sizeContraUsua){
				//Si al finalizar el ciclo el indice coincide con el tamaño de la cadena contraseña usuario procedemos a notitificar que el ususario es correcto
				printf("\nTu usuario %s se encuentra registrado en el programa\n", nomUsuario);
			}else{
				//Si no encuentra la coincidencia notificamos que los datos son incorrectos
				printf("\nTus datos son incorrectos");
			}
		}
	}

	return 0;
} 










