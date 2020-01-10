#ifndef __STD_LIB_USED
#define __STD_LIB_USED
#include "std_lib.h"
#endif

const int NAME_INDEX = 1;
const int AGE_INDEX = 2;
const int GENDER_INDEX = 3;
const int PHONE_INDEX = 4;

const int AGE_INIT = 0;
const int GENDER_INIT = 0;
const int MALE_INDEX = 1;
const int FEMALE_INDEX = 2;

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

void contact_init();

