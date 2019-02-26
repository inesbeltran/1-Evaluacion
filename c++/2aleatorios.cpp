#include<iostream>
#include<cstdlib>
#include<ctime>
//este programa genera 5 numeros al azar
int main(){
    float lista[5]; //aqui guardamos los numeros
    int i;
    char salir;
    double semillita;
    semillita=time(0); 
    srand(semillita);
    for(i=0;i<5;i++){
       lista[i]=rand()%6;
       std::cout<<lista[i]<<"\n";
    } 
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}            
