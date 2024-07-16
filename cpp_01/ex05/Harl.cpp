#include "Harl.hpp"

Harl::Harl(void)
{
};
Harl::~Harl(void)
{

};
void Harl::complain( std::string level )
{
    int i;

    i = 0;
    void (Harl::*funcs[4])() =
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    std::string array[] = 
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    while (i < 4)
    {
        if (level == array[i])
        {
            (this->*funcs[i])();
            return ;
        }
        i++;
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
};
void Harl::debug( void )
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!.\n" << std::endl;
};
void Harl::info( void )
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!.\n" << std::endl;
};
void Harl::warning( void )
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
};
void Harl::error( void )
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "his is unacceptable! I want to speak to the manager now.\n" << std::endl;
};
