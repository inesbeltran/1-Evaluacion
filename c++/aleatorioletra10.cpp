#include<iostream>
#include<cstdlib> 
#include<ctime>
/*Este programa genera 5 n�meros al azar*/
int main(){
    char matriz[10][10];//Aqu� guardamos los n�meros
	int fil,col;
	char salir;
	double semillita;
	semillita=time(0);
	srand(semillita);
	for(fil=0;fil<10;fil++){
      for(col=0;col<10;col++){
		  matriz[fil][col]=rand()%25+65;
		  std::cout<<matriz[fil][col];
	  }
	  std::cout<<"\n";
	}
	std::cout<<"\nToca cualquier tecla para salir";
	std::cin>>salir;
	return 0;
}


