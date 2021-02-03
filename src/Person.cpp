//
//  Person.cpp
//  DisksDatabase
//
//  Created by Henrik3 on 02/02/2021.
//
//

#include "../include/Person.hpp"

Person::Person(std::string name, std::string address, std::string cpf, int age)
{
    allocate();

    *this->name = name;
    *this->address = address;
    *this->cpf = cpf;
    *this->age = age;
}
Person::~Person()
{
    std::cout << "destroying person" << '\n';
    destroy();
}

void Person::allocate()
{
    this->name = new std::string;
    this->address = new std::string;
    this->cpf = new std::string;
    this->age = new int;
}
void Person::destroy()
{
    delete this->name;
    delete this->address;
    delete this->cpf;
    delete this->age;
}

void Person::setName(std::string name)
{
    *this->name = name;
}
void Person::setAddress(std::string address)
{
    *this->address = address;
}
void Person::setCpf(std::string cpf)
{
    *this->cpf = cpf;
}
void Person::setAge(int age)
{
    *this->age = age;
}

std::string Person::getName()
{
    return *this->name;
}
std::string Person::getAddress()
{
    return *this->address;
}
std::string Person::getCpf()
{
    return *this->cpf;
}
int Person::getAge()
{
    return *this->age;
}

void Person::getPerson()
{
    std::cout << getName() << '\n';
    std::cout << getAddress() << '\n';
    std::cout << getCpf() << '\n';
    std::cout << std::to_string(getAge()) << '\n';
}
