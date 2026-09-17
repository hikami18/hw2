#ifndef SSD_H
#define SSD_H

class SSD {
private:
    char* brand;
    int capacity;

public:
    SSD(const char* brand, int capacity);
    SSD(const char* brand);
    SSD(const SSD& other);
    SSD& operator=(const SSD& other);
    ~SSD();

    const char* getBrand() const;
    int getCapacity() const;
};

#endif
