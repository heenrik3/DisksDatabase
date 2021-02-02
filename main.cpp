#include <iostream>
#include "include/Disk.hpp"
#include "include/Database.hpp"

int main(int argc, char const *argv[])
{
    std::string title, artist, label;
    std::string amountTracks, year;
    std::string serialNumber;

    Database *db = new Database();
    db->createOrOpenDatabase("test");
    db->execute("CREATE TABLE IF NOT EXISTS DISKS(TITLE TEXT, ARTIST TEXT, LABEL TEXT, AMOUNTTRACKS INTEGER, YEAR INTEGER, SERIALNUMBER INTEGER NOT NULL PRIMARY KEY);");
    Disk *disk = new Disk("Blackout", "Britney Spears", "JIVE", 13, 2007, 6546354);
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
                                            + ");"; */

    std::string query = "INSERT INTO DISKS VALUES('"+ disk->getTitle() + "','"
                                            + disk->getArtist() +"','"
                                            + disk->getLabel() +"',"
                                            + std::to_string(disk->getAmountTracks()) +","
                                            + std::to_string(disk->getYear()) +","
                                            + std::to_string(disk->getSerialNumber())
                                            + ");";
    db->execute(query);


    delete disk;
    delete db;
    return 0;
}
