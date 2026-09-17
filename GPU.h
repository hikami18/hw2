#ifndef GPU_H
#define GPU_H

class GPU {
private:
    char* model;
    int vram;

public:
    GPU(const char* model, int vram);
    GPU(const char* model);
    GPU(const GPU& other);
    GPU& operator=(const GPU& other);
    ~GPU();

    const char* getModel() const;
    int getVram() const;
};

#endif
