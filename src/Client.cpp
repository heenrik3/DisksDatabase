//
//  Client.cpp
//  DisksDatabase
//
//  Created by Henrik3 on 02/02/2021.
//
//

#include "../include/Client.hpp"

Client::Client(std::string name,
                std::string address,
                  std::string cpf,
                   int age,
                    int id, std::string email, std::string password): Person(name, address, cpf, age)
{
    allocate();

    *this->id = id;
    *this->email = email;
    *this->password = password;
}

Client::~Client()
{
    std::cout << "destroying client" << '\n';
    destroy();
}

void Client::allocate()
{
    this->id = new int;
    this->email = new std::string;
    this->password = new std::string;
}
void Client::destroy()
{
    delete this->id;
    delete this->email;
    delete this->password;
}

void Client::setId(int id)
{
    *this->id = id;
}
void Client::setEmail(std::string email)
{
    *this->email = email;
}
void Client::setPassword(std::string password)
{
    *this->password = password;
}

int Client::getId()
{
    return *this->id;
}
std::string Client::getEmail()
{
    return *this->email;
}
std::string Client::getPassword()
{
    return *this->password;
}

void Client::getClient()
{
    std::cout << getName() << '\n';
    std::cout << std::to_string(getId()) << '\n';
    std::cout << getEmail() << '\n';
    std::cout << getPassword() << '\n';
}
