#include<iostream>
#include<cstdlib> 
#include<ctime>
/*Este programa genera 5 n�meros al azar*/
int main(){
float matriz[3][3];//Aqu� guardamos los n�meros
	int fil,col;
	char salir;
	double semillita;
	semillita=time(0);
	srand(semillita);
	for(fil=0;fil<3;fil++){
      for(col=0;col<3;col++){
		  matriz[fil][col]=rand()%10;
		  std::cout<<matriz[fil][col];
	  }
	  std::cout<<"\n";
	}
	std::cout<<"\nToca cualquier tecla para salir";
	std::cin>>salir;
	return 0;
}


