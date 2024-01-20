#ifndef BASE_HPP
#define BASE_HPP

class Base {
public:
    Base();
    Base(const Base& other);
    Base& operator=(const Base& other);
    virtual ~Base();
};

#endif
