#include "MutantStack.hpp"

template <typename T, class C>
MutantStack<T, C>::MutantStack(): std::stack<T, C>()
{

}


template <typename T, class C>
MutantStack<T, C>::~MutantStack()
{

}

template <typename T, class C>
MutantStack<T, C>::MutantStack(MutantStack &copy): std::stack<T, C>(copy)
{

}

template <typename T, class C>
MutantStack<T, C> &MutantStack<T, C>::operator=(MutantStack<T, C> &copy)
{
    this->stack = copy.stack;
    return *this;
}

template <typename T, class C>
typename C::iterator MutantStack<T, C>::begin(void)
{
    return this->c.begin();
}

template <typename T, class C>
typename C::iterator MutantStack<T, C>::end(void)
{
    return this->c.end();
}