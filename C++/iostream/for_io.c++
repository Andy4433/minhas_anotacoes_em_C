#include <iostream>
#include <iomanip>

int i=0;
float j=5;
std::string nomes[5];

int main(){

    for ( i ; i < j; i++)
    {
        std::cout << "digite os nomes " <<std::setw(6)<<"|" << i <<std::endl;
        std::cin >> nomes[i];
    }

    
    for (int k = 0; k < 20; k++)
    {
        std::cout << "-";
    }
    std::cout <<"-" <<std::endl;

    for ( i = 0; i < j; i++)
    {
        std::cout << nomes[i] <<std::endl;        /* code */
    }
    

}