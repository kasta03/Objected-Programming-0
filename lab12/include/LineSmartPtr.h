#pragma once

#include "Line.h"
#include <memory>

class LineSmartPtr {
private:
    Line* ptr;
    size_t* ref_count;

public:
    LineSmartPtr(Line* _ptr) : ptr(_ptr), ref_count(new size_t(1)) {}

    LineSmartPtr(const LineSmartPtr& other) : ptr(other.ptr), ref_count(other.ref_count) {
        ++(*ref_count);
    }

    ~LineSmartPtr() {
        if (--(*ref_count) == 0) {
            delete ptr;
            delete ref_count;
        }
    }

    LineSmartPtr& operator=(const LineSmartPtr& other) {
        if (this != &other) {
            if (--(*ref_count) == 0) {
                delete ptr;
                delete ref_count;
            }
            ptr = other.ptr;
            ref_count = other.ref_count;
            ++(*ref_count);
        }
        return *this;
    }

    const Line& operator*() const {
        return *ptr;
    }

    Line& operator*() {
        return *ptr;
    }

    const Line* operator->() const {
        return ptr;
    }

    Line* operator->() {
        return ptr;
    }
};
