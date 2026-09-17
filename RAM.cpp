#include "RAM.h"
#include <cstring>

RAM::RAM(const char* type, int size) : size(size) {
    this->type = new char[strlen(type) + 1];
    strcpy(this->type, type);
}

RAM::RAM(const char* type) : RAM(type, 16) {}

RAM::RAM(const RAM& other) : size(other.size) {
    type = new char[strlen(other.type) + 1];
    strcpy(type, other.type);
}

RAM& RAM::operator=(const RAM& other) {
    if (this != &other) {
        delete[] type;
        type = new char[strlen(other.type) + 1];
        strcpy(type, other.type);
        size = other.size;
    }
    return *this;
}

RAM::~RAM() {
    delete[] type;
}

const char* RAM::getType() const { return type; }
int RAM::getSize() const { return size; }
