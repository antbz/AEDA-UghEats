#ifndef AEDA_UGHEATS_LOCATION_H
#define AEDA_UGHEATS_LOCATION_H

#include "Address.h"
#include <utility>

using namespace std;

class Location {
private:
    Address address;
    pair<int,int> coords;
public:
    //Metodos Set
    void setLocationAddress(Address address);
    void setLocationCoords(pair<int,int> coords);
    //Metodos Get
    Address getLocationAddress() const;
    pair <int,int> getLocationCoords() const;
};


#endif //AEDA_UGHEATS_LOCATION_H
