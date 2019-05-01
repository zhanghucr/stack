#ifndef __STACK_HPP__
#define __STACK_HPP__

#include <iostream>

using namespace std;

template <typename T>
class stack
{
public:
    stack(int capacity);
    ~stack();
    bool is_empty() const;
    bool is_full() const;
    bool push(T& x);
    bool pop(T& x);
    int top() const;
    T& operator[](int stack_index);
    void clear();
private:
    int m_capacity;
    int m_top;
    T  *m_stack;
};
 
#endif  /* __STACK_HPP__ */
