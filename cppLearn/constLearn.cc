#include <iostream>

void constf1(int const &var1){

    std::cout<<"addres of var1:"<<&var1<<std::endl;

}

void constf2(){

    int var1 = 10;
    std::cout<<"address of original var1 "<<&var1<<std::endl;
    constf1(var1);

}

int main(){
    constf2();
    return 0;
}
