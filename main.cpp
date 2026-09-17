#include <iostream>
#include "Laptop.h"

int main() {
    CPU cpu("Intel i7", 3.5);
    SSD ssd("Samsung", 1000);
    GPU gpu("RTX 4060", 8);
    RAM ram("DDR5", 32);

    Laptop laptop1("ASUS", "Black", 1500.0, cpu, ssd, gpu, ram);
    laptop1.print();

    std::cout << "Total laptops: " << Laptop::getCount() << "\n\n";

    Laptop laptop2("Lenovo", "Grey", 1200.0, CPU("AMD Ryzen"), SSD("Kingston"), GPU("RTX 3050"), RAM("DDR4"));
    laptop2.print();

    std::cout << "Total laptops: " << Laptop::getCount() << "\n";

    return 0;
}
