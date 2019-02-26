#include<iostream>
main(){
       int n_maximo=100;
       char salir;
       int i;
       for(i=1;i<=n_maximo;i++){
                           if(i%2==0){
                              std::cout<<i;
                              std::cout<<" es par";
                              std::cout<<"\n";
                           }else{
                                 std::cout<<i;
                                 std::cout<<" es impar"; 
                                 std::cout<<"\n";
                           }
       }
       std::cout<<"toca cualquier tecla para salir";
       std::cin>>salir; 
       return 0;
}

