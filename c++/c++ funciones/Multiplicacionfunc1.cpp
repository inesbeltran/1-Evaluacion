//Escriba una función llamada “multiplicación” que reciba como argumento cuatro números reales distintos de cero y que devuelva su producto.
#include<iostream>
using namespace std;

float multiplicacion(float num1,float num2, float num3, float num4){
    float respuesta;
    respuesta=num1*num2*num3*num4;
    return(respuesta);   
}


int main(){
    float num1,num2,num3,num4;
    char salir;
    cout<<"Introduce un numero: ";
   
    do{
      cin>>num1;
      if(num1==0){
        cout<<"\nEl numero es igual a cero, intentalo de nuevo: "; 
      }
    }while(num1==0); 
    
    cout<<"Introduce otro numero: ";
    do{
    cin>>num2;
    if(num2==0){
        cout<<"\nEl numero es igual a cero, intentalo de nuevo: "; 
      }
    }while(num2==0); 
    cout<<"Introduce otro numero: ";
    do{
    cin>>num3;
    if(num3==0){
        cout<<"\nEl numero es igual a cero, intentalo de nuevo: "; 
      }   
    }while(num3==0); 
    cout<<"Introduce un ultimo numero: ";
    do{
    cin>>num4;
    if(num4==0){
        cout<<"\nEl numero es igual a cero, intentalo de nuevo: "; 
      }
    }while(num4==0); 

    cout<<"\nEL resultado es: "<<multiplicacion(num1,num2,num3,num4);
    cout<<"\nToca cualquier tecla para salir:";
    cin>>salir;
    return 0;
}
       
