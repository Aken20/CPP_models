#ifndef _HARL_H_
# define _HARL_H_

#include <iostream>

class Harl
{
    public:
    
        Harl();
        ~Harl();
        void complain( std::string level );
        const void pdebug(void (*Harl::*)(void));
        const void (*pinfo)(void);
        const void (*pwarning)( void );
        const void (*_perror)( void );
    
    private:

        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};

#endif