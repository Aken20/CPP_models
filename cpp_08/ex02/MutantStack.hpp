#ifndef _MUTANTSTACK_H_
# define _MUTANTSTACK_H_

#include <iostream>
#include <cstdlib>
#include <exception>
#include <stack>
#include <deque>
#include <vector>

template <typename T, typename C = deque>
class MutantStack<T, C = deque> : public std::stack<T, C>
{
    private:
        typename C::iterator iterator;

    public:
        MutantStack();
        MutantStack();
        ~MutantStack();
        MutantStack(MutantStack &copy);
        MutantStack &operator=(MutantStack &copy);


};

#endif