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
        void announce( void );
        void set_name(std::string name);
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif