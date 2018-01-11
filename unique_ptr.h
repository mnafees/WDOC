//
// Copyright 2018 Mohammed Nafees
//

#ifndef UNIQUE_PTR_H_
#define UNIQUE_PTR_H_

// std
#include <utility>

namespace mn {

//
// @description A sample implementation of unique_ptr
//
template <typename T>
class unique_ptr {
 public:
    explicit unique_ptr(T* p) : _ptr(p) {}
    unique_ptr(unique_ptr&& other) { _ptr = other._ptr; }
    unique_ptr(const unique_ptr&) = delete;
    unique_ptr& operator=(unique_ptr&& other) {
        _ptr = std::move(other._ptr);
        return *this;
    }
    unique_ptr& operator=(const unique_ptr&) = delete;
    ~unique_ptr() { if (_ptr) delete _ptr; }

    T* get() { return _ptr; }
    T* release() {
        T* temp = _ptr;
        _ptr = nullptr;
        return temp;
    }

 private:
    T* _ptr;
};

}  // namespace mn

#endif  // UNIQUE_PTR_H_
