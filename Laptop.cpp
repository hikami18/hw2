#include "Laptop.h"
#include <iostream>
#include <cstring>

int Laptop::count = 0;

Laptop::Laptop(const char* name, const char* color, double price, CPU cpu, SSD ssd, GPU gpu, RAM ram)
    : price(price), cpu(cpu), ssd(ssd), gpu(gpu), ram(ram) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);

    this->color = new char[strlen(color) + 1];
    strcpy(this->color, color);

    count++;
}

Laptop::Laptop(const Laptop& other)
    : price(other.price), cpu(other.cpu), ssd(other.ssd), gpu(other.gpu), ram(other.ram) {
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);

    color = new char[strlen(other.color) + 1];
    strcpy(color, other.color);

    count++;
}

Laptop& Laptop::operator=(const Laptop& other) {
    if (this != &other) {
        delete[] name;
        delete[] color;

        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);

        color = new char[strlen(other.color) + 1];
        strcpy(color, other.color);

        price = other.price;
        cpu = other.cpu;
        ssd = other.ssd;
        gpu = other.gpu;
        ram = other.ram;
    }
    return *this;
}

Laptop::~Laptop() {
    delete[] name;
    delete[] color;
    count--;
}

const char* Laptop::getName() const { return name; }
const char* Laptop::getColor() const { return color; }
double Laptop::getPrice() const { return price; }

int Laptop::getCount() { return count; }

void Laptop::print() const {
    std::cout << "Laptop: " << name << " (" << color << ")\n";
    std::cout << "Price: $" << price << "\n";
    std::cout << "CPU: " << cpu.getModel() << " " << cpu.getFrequency() << "GHz\n";
    std::cout << "SSD: " << ssd.getBrand() << " " << ssd.getCapacity() << "GB\n";
    std::cout << "GPU: " << gpu.getModel() << " " << gpu.getVram() << "GB\n";
    std::cout << "RAM: " << ram.getType() << " " << ram.getSize() << "GB\n";
}
