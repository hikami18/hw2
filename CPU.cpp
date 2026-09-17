#include "CPU.h"
#include <cstring>

CPU::CPU(const char* model, double frequency) : frequency(frequency) {
    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);
}

CPU::CPU(const char* model) : CPU(model, 2.5) {}

CPU::CPU(const CPU& other) : frequency(other.frequency) {
    model = new char[strlen(other.model) + 1];
    strcpy(model, other.model);
}

CPU& CPU::operator=(const CPU& other) {
    if (this != &other) {
        delete[] model;
        model = new char[strlen(other.model) + 1];
        strcpy(model, other.model);
        frequency = other.frequency;
    }
    return *this;
}

CPU::~CPU() {
    delete[] model;
}

const char* CPU::getModel() const { return model; }
double CPU::getFrequency() const { return frequency; }
