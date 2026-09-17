#ifndef LAPTOP_H
#define LAPTOP_H

#include "CPU.h"
#include "SSD.h"
#include "GPU.h"
#include "RAM.h"

class Laptop {
private:
    char* name;
    char* color;
    double price;

    CPU cpu;
    SSD ssd;
    GPU gpu;
    RAM ram;

    static int count;

public:
    Laptop(const char* name, const char* color, double price, CPU cpu, SSD ssd, GPU gpu, RAM ram);
    Laptop(const Laptop& other);
    Laptop& operator=(const Laptop& other);
    ~Laptop();

    const char* getName() const;
    const char* getColor() const;
    double getPrice() const;

    static int getCount();
    void print() const;
};

#endif
