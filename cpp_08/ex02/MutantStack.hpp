#ifndef _MUTANTSTACK_H_
# define _MUTANTSTACK_H_

#include <iostream>
#include <cstdlib>
#include <exception>
#include <stack>
#include <deque>
#include <vector>

template <typename T, class C = std::deque<T> >
class MutantStack : public std::stack<T, C>
{
    private:
    
    public:
        typedef typename C::iterator iterator;

        MutantStack();
        ~MutantStack();
        MutantStack(MutantStack &copy);
        MutantStack &operator=(MutantStack &copy);
        iterator begin(void);
        iterator end(void);

};

#endif