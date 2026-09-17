#ifndef CPU_H
#define CPU_H

class CPU {
private:
    char* model;
    double frequency;

public:
    CPU(const char* model, double frequency);
    CPU(const char* model);
    CPU(const CPU& other);
    CPU& operator=(const CPU& other);
    ~CPU();

    const char* getModel() const;
    double getFrequency() const;
};

#endif
