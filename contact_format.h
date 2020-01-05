#ifndef __STD_LIB_USED
#define __STD_LIB_USED
#include "std_lib.h"
#endif

struct Contact
{
    std::string name;
    int age;
    int gender;
    std::string phone_number;
};

const int CONTACT_LENTH = 100;
extern Contact * const con;
//Contact con[CONTACT_LENTH] = {};
