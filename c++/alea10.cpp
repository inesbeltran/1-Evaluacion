#include<iostream>
#include<ctime>
#include<string>
/*Este programa genera una matriz 3x3 al azar*/
int main(){
	char matriz[10][10];//Aqu� guardamos los n�meros
	int fil,col;
	int longitud;
	int posx,posy;//Posici�n donde ir� la palabra
	char palabra[10];
	char salir;
    int semillita;
	semillita=time(0);
	srand(semillita);//Inicializar el generador de n�meros alea
	//Genero la matriz de letras al azar
	for(fil=0;fil<10;fil++){
      for(col=0;col<10;col++){
		  matriz[fil][col]=rand()%25+65;
		  std::cout<<matriz[fil][col];
	  }
	  std::cout<<"\n";
	}
	//Generamos al azar posx y posy
	posx=rand()%10;
	posy=rand()%10;
	//Colocamos un asterisco en esa posici�n
	matriz[posx][posy]='*';
	std::cout<<"\nNUEVA MATRIZ\n\n";
	//Volvemos a sacar por pantalla la matriz
	for(fil=0;fil<10;fil++){
      for(col=0;col<10;col++){
		  std::cout<<matriz[fil][col];
	  }
	  std::cout<<"\n";
	}
	//Leemos la palabra
	std::cout<<"Introduce una palabra: ";
	std::cin>>palabra;
	//Medimos la longitud de la palabra
	longitud=strlen(palabra);
	//recorto las posiciones y vuelco letra a letra la palabra
	for(col=posy;col<posy+longitud;col++){
        matriz[posx][col]=palabra[col-posy];
        }                                  
	
	std::cout<<"La palabra mide: "<<longitud;
	std::cout<<"\nToca cualquier tecla para salir";
	std::cin>>salir;
	return 0;
}
