#include "ccustomstack.h"

template <class T>
void CCustomStack<T>::push(const T& value) {
    auto newItem = std::make_unique<SItemContainer>();
    auto newItemPtr = newItem.get();
    newItemPtr->item = value;

    if (fList.empty()) {
        newItemPtr->itemMinPtr = &newItemPtr->item;
    } else {
        auto *frontItem = fList.front().get();
        if (*frontItem->itemMinPtr > value) {
            newItemPtr->itemMinPtr = &newItemPtr->item;
        } else {
            newItemPtr->itemMinPtr = frontItem->itemMinPtr;
        }
    }

    fList.push_front(std::move(newItem));
}

template <class T>
const T& CCustomStack<T>::top() const {
    return fList.front().get()->item;
}

template <class T>
const T& CCustomStack<T>::min() const {
    return *(fList.front().get()->itemMinPtr);
}

template <class T>
void CCustomStack<T>::pop() {
    fList.pop_front();
}

template <class T>
bool CCustomStack<T>::empty() const {
    return fList.empty();
}
