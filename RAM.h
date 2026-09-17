#ifndef RAM_H
#define RAM_H

class RAM {
private:
    char* type;
    int size;

public:
    RAM(const char* type, int size);
    RAM(const char* type);
    RAM(const RAM& other);
    RAM& operator=(const RAM& other);
    ~RAM();

    const char* getType() const;
    int getSize() const;
};

#endif
