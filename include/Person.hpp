//
//  Person.hpp
//  DisksDatabase
//
//  Created by Henrik3 on 02/02/2021.
//
//

#ifndef Person_hpp
#define Person_hpp

#include <iostream>

class Person {
private:
  std::string *name, *address, *cpf;
  int *age;

  void allocate();
  void destroy();

public:
    Person(std::string name, std::string address, std::string cpf, int age);
    virtual ~Person();

    void setName(std::string name);
    void setAddress(std::string address);
    void setCpf(std::string cpf);
    void setAge(int age);

    std::string getName();
    std::string getAddress();
    std::string getCpf();
    int getAge();

    void getPerson();

};


#endif /* Person_hpp */
