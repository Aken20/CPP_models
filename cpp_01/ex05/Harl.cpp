#include "Harl.hpp"

Harl::Harl(void)
{

};
Harl::~Harl(void)
{

};
void Harl::complain( std::string level )
{
    void (*func)(void);
    *level();
};
void Harl::debug( void )
{
    std::cout << "DEBUG level: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
};
void Harl::info( void )
{
    std::cout << "INFO level: cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};
void Harl::warning( void )
{
    std::cout << "WARNING level: think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
};
void Harl::error( void )
{
    std::cout << "ERROR level: his is unacceptable! I want to speak to the manager now." << std::endl;
};
