#include "stack.hpp"

template<typename T>
stack<T>::stack(int capacity):m_capacity(capacity),m_top(-1),m_stack(NULL)
{
    m_stack = new T[capacity];
}

template<typename T>
stack<T>::~stack()
{
    delete[] m_stack;
}

template<typename T>
void stack<T>::clear()
{
    m_top = -1;
}

template<typename T>
bool stack<T>::is_empty() const
{
    if (m_top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template<typename T>
bool stack<T>::is_full() const
{
    if (m_top < m_capacity)
    {
        return false;
    }
    else
    {
        return true;
    }
}

template<typename T>
bool stack<T>::push(T& x)
{
    if (is_full())
    {
        return false;
    }
    else
    {
        m_stack[++m_top] = x;
        return true;
    }
}

template<typename T>
bool stack<T>::pop(T& x)
{
    if (is_empty())
    {
        return false;
    }
    else
    {
        x = m_stack[m_top--];
        return true;
    }
}

template<typename T>
int stack<T>::top() const
{
   return m_top;
}

template<typename T>
T& stack<T>::operator[](int stack_index)
{
    return m_stack[stack_index];
}

