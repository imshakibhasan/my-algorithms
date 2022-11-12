/**
 * @file structure_of_cpp_program.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

//Authur Shakib Hasan               //Documentation single line
/*Write on 11 November 
program to demonstrate              //Documentation multiline
Basic Structure of C++ */

#include<iostream>
#define Pi 3.1416

int r = 2;
void area();

class MyClass {
    public:
    int a;
    void display() {
        std::cout<<"inside class"<<std::endl;
    }
};

int main() {
    MyClass m;
    m.a = 90;
    m.display();
    area();
    std::cout<<"Hello World From Main Function!!"<<std::endl;
    std::cout<<m.a<<std::endl;
    return 0;
}
void area() {

}

