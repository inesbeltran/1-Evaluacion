#include<iostream>
//definir la funcion fuera de main
int mayor(int num1,int num2,int num3){
    int respuesta;
    if(num1>num2 && num1>num3){
       respuesta=num1;
       }
    if(num2>num3 && num2>num1){
       respuesta=num2;
       }
    if(num3>num1 && num3>num2){
       respuesta=num3;
       }
    return respuesta;
}    
                          
int main(){
    int num1,num2,num3;
    char salir;
    //leo numero entero
    std::cout<<"introduce un numero";
    std::cin>>num1;
    //leo otro numero entero
    std::cout<<"introduce otro numero";
    std::cin>>num2;
    //leo otro numero entero
    std::cout<<"introduce otro numero";
    std::cin>>num3;
    //incovo a la funcion y lo envio a una funcion que los compara
    std::cout<<"el mayor es;"<<mayor(num1,num2,num3);
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}
    
