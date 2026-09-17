#include "SSD.h"
#include <cstring>

SSD::SSD(const char* brand, int capacity) : capacity(capacity) {
    this->brand = new char[strlen(brand) + 1];
    strcpy(this->brand, brand);
}

SSD::SSD(const char* brand) : SSD(brand, 512) {}

SSD::SSD(const SSD& other) : capacity(other.capacity) {
    brand = new char[strlen(other.brand) + 1];
    strcpy(brand, other.brand);
}

SSD& SSD::operator=(const SSD& other) {
    if (this != &other) {
        delete[] brand;
        brand = new char[strlen(other.brand) + 1];
        strcpy(brand, other.brand);
        capacity = other.capacity;
    }
    return *this;
}

SSD::~SSD() {
    delete[] brand;
}

const char* SSD::getBrand() const { return brand; }
int SSD::getCapacity() const { return capacity; }
