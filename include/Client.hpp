//
//  Client.hpp
//  DisksDatabase
//
//  Created by Henrik3 on 02/02/2021.
//
//

#ifndef Client_hpp
#define Client_hpp

#include <iostream>
#include "Person.hpp"

class Client: public Person {
private:

  int *id;
  std::string *email, *password;

  void allocate();
  void destroy();

public:
    Client(std::string name,
       std::string address,
        std::string cpf,
         int age,
          int id,
           std::string email, std::string password);
    ~Client();

    void setId(int id);
    void setEmail(std::string email);
    void setPassword(std::string password);

    int getId();
    std::string getEmail();
    std::string getPassword();

    void getClient();
};


#endif /* Client_hpp */
