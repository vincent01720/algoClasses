#include <iostream>
#include <vector>
int main(){
    int i = 10;
    int& refi = i;
    int* ptri = &i;
    //std::cout<<"The value of refi is: "<<refi<<std::endl;
    std::cout<<"The address of i is: "<<&i<<std::endl;
    //std::cout<<"The address of refi is: "<<&refi<<std::endl;
    std::cout<<"The value of the pointer is: "<<ptri<<std::endl;
    std::cout<<"The target of the pointer is: "<<*ptri<<std::endl;
    refi = 20;
    std::cout<<"Is i affected? Since refi changed to 20 and "<< refi << std::endl;
    std::cout<<"The address of NEW i is: "<<&i<<std::endl;
    std::cout<<"The address of NEW refi is: "<<&refi<<std::endl;

    return 0;
}