# ifndef _ZOMBIE_H_
#define _ZOMBIE_H_

# include <iostream>
# include <cstdlib>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(void);
        ~Zombie(void);
        std::string get_name(void);
        void set_name(std::string name);
        void announce( void );
};
Zombie* zombieHorde( int N, std::string name );

#endif