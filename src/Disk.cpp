//
//  Disk.cpp
//  Programming
//
//  Created by <author> on 01/02/2021.
//
//

#include "../include/Disk.hpp"

Disk::Disk(std::string title,
            std::string artist,
             std::string label,
             int amountTracks,
              int year,
               long serialNumber)
{
    allocate();

    *this->title = title;
    *this->artist = artist;
    *this->label = label;
    *this->amountTracks = amountTracks;
    *this->year = year;
    *this->serialNumber = serialNumber;

}

Disk::~Disk()
{
    destroy();
}

void Disk::allocate()
{
  this->title = new std::string;
  this->artist = new std::string;
  this->label = new std::string;
  this->amountTracks = new int;
  this->year = new int;
  this->serialNumber = new long;
}

void Disk::destroy()
{
  delete this->title;
  delete this->artist;
  delete this->label;
  delete this->amountTracks;
  delete this->year;
  delete this->serialNumber;
}

std::string Disk::getTitle()
{
    return *this->title;
}

std::string Disk::getArtist()
{
    return *this->artist;
}
std::string Disk::getLabel()
{
    return *this->label;
}
int Disk::getAmountTracks()
{
    return *this->amountTracks;
}

int Disk::getYear()
{
    return *this->year;
}
long Disk::getSerialNumber()
{
    return *this->serialNumber;
}

void Disk::getDisk()
{
    std::cout << "Title:" + getTitle() << '\n';
    std::cout << "Artist:" + getArtist() << '\n';
    std::cout << "Label:" + getLabel() << '\n';
    std::cout << "AmountTracks:" + std::to_string(getAmountTracks()) << '\n';
    std::cout << "Year:" + std::to_string(getYear()) << '\n';
    std::cout << "SerialNumber:" + std::to_string(getSerialNumber()) << '\n';
}
