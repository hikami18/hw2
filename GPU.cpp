#include "GPU.h"
#include <cstring>

GPU::GPU(const char* model, int vram) : vram(vram) {
    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);
}

GPU::GPU(const char* model) : GPU(model, 6) {}

GPU::GPU(const GPU& other) : vram(other.vram) {
    model = new char[strlen(other.model) + 1];
    strcpy(model, other.model);
}

GPU& GPU::operator=(const GPU& other) {
    if (this != &other) {
        delete[] model;
        model = new char[strlen(other.model) + 1];
        strcpy(model, other.model);
        vram = other.vram;
    }
    return *this;
}

GPU::~GPU() {
    delete[] model;
}

const char* GPU::getModel() const { return model; }
int GPU::getVram() const { return vram; }
