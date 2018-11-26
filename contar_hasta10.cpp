#include<iostream>
int main (){/*etse programa cueenta hasta diez*/
    int i;
    char salir; 
/*los for son un poco distintos*/
/*i++ es lo mismo que i=i+1*/
    for(i=1;i<=10;i++){
    std::cout<<i;
                       
}
std::cout<< " pulsa cualquier tecla:";
std::cin>>salir; /*salida*/
return 0;
}
 
