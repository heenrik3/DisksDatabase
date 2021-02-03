#include <iostream>
#include "include/Client.hpp"
#include "include/Database.hpp"

int main(int argc, char const *argv[])
{
    std::string title, artist, label;
    std::string amountTracks, year;
    std::string serialNumber;

    Database *db = new Database();
    db->createOrOpenDatabase("test");
    db->execute("CREATE TABLE IF NOT EXISTS CLIENTS(NAME TEXT, ADDRESS TEXT, CPF TEXT, AGE INTEGER, ID INTEGER NOT NULL PRIMARY KEY, EMAIL TEXT, PASSWORD TEXT);");
    Client *c = new Client("Henrik3", "RIO", "13948343", 27, 2007, "email@gmail.com", "9289823");
    /*
    title = disk->getTitle();
    artist = disk->getArtist();
    label = disk->getLabel();
    amountTracks = std::to_string(disk->getAmountTracks());
    year = std::to_string(disk->getYear());
    serialNumber = std::to_string(disk->getSerialNumber());

    std::string query = "INSERT INTO DISKS VALUES('"+ title + "','"
                                            + artist +"','"
                                            + label +"',"
                                            + amountTracks +","
                                            + year +","
                                            + serialNumber
                                            + ");";

    std::string query = "INSERT INTO DISKS VALUES('"+ disk->getTitle() + "','"
                                            + disk->getArtist() +"','"
                                            + disk->getLabel() +"',"
                                            + std::to_string(disk->getAmountTracks()) +","
                                            + std::to_string(disk->getYear()) +","
                                            + std::to_string(disk->getSerialNumber())
                                            + ");"; */

    std::string query = "INSERT INTO CLIENTS VALUES('" +
                        c->getName() + "', '" +
                        c->getAddress() + "', '" +
                        c->getCpf() + "', " +
                        std::to_string(c->getAge()) + "," +
                        std::to_string(c->getId()) + ",'" +
                        c->getEmail() + "', '" +
                        c->getPassword() + "'" +
                        ");";
    db->execute(query);


    delete c;
    delete db;
    return 0;
}
