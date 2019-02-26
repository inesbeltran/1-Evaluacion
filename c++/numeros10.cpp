#include<iostream>
main(){
       float num[10];
       int i;
       char salir;
       float suma=0;
       float n_numeros;
       float media;
       std::cout<<"cuantos numeros quieres introducir: ";
       std::cin>>n_numeros;
       for(i=0;i<n_numeros;i++){
           std::cout<<"dime un numero";
           std::cin>>num[i];
           
       }
       std::cout<<"lista de numeros;\n";
       for(i=0;i<n_numeros;i++){
           std::cout<<num[i];
       }
       for(i=0;i<n_numeros;i++){
           suma=suma+num[i];                  
       }
       media=suma/n_numeros;
       std::cout<<"\nMEDIA: "<<media;                 
       std::cout<<"\n toca cualquier tecla para salir";
       std::cin>>salir;
        return 0;
}      
