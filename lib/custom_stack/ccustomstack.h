#ifndef CCUSTOMSTACK_H
#define CCUSTOMSTACK_H

#include "custom_stack_global.h"

#include <forward_list>

template <typename T>
class CUSTOM_STACK_EXPORT CCustomStack
{
private:
    struct SItemContainer {
        T item;
        T* itemMinPtr;
    };
    std::forward_list<std::unique_ptr<SItemContainer>> fList;


public:
    const T& top() const;
    void push(const T& value);
    void pop();
    const T& min() const;
    bool empty() const;
};

#include "ccustomstack.cpp"

#endif // CCUSTOMSTACK_H
