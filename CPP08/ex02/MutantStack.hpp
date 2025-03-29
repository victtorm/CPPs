#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <iterator>

template <typename T>

class MutantStack : public std::stack<T>
{
	public:

        MutantStack();
        MutantStack(const MutantStack& src);
        MutantStack<T>& operator=(const MutantStack<T>& src);
        ~MutantStack();
    
        typedef typename std::stack<T>::container_type inside_ctr;
		typedef typename inside_ctr::iterator iterator; 
		typedef typename inside_ctr::const_iterator const_iterator;
	
	    iterator begin();
        iterator end();
        const_iterator begin() const;
        const_iterator end() const;
};

#include "MutantStack.tpp"

#endif