//
//  Disk.hpp
//  Programming
//
//  Created by <author> on 01/02/2021.
//
//

#ifndef Disk_hpp
#define Disk_hpp

#include <iostream>

class Disk {

private:
  std::string *title, *artist, *label;
  int *amountTracks, *year;
  long *serialNumber;

  void allocate();
  void destroy();

public:
    Disk(std::string title,
          std::string artist,
           std::string label,
            int amountTracks,
              int year,
                long serialNumber);
    ~Disk();

    std::string getTitle();
    std::string getArtist();
    std::string getLabel();
    int getAmountTracks();
    int getYear();
    long getSerialNumber();

    void setTitle(std::string title);
    void setArtist(std::string artist);
    void setLabel(std::string label);
    void setAmountTracks(int amount);
    void setYear(int year);
    void setSerialNumber(long number);

    void getDisk();
};


#endif /* Disk_hpp */
