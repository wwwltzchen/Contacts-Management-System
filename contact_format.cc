#include "contact_format.h"

//struct Contact * const con = (Contact *)malloc(CONTACT_LENTH * sizeof(Contact));
struct Contact * const con = new Contact[CONTACT_LENTH];
//Contact con[CONTACT_LENTH] = {};

void contact_init()
{
    struct Contact * cp = con;
    for (int i = 0; i < CONTACT_LENTH; i++)
    {   
        cp -> name.clear();
        cp -> age = AGE_INIT;
        cp -> gender = GENDER_INIT;
        cp -> phone_number = "a";
        cp++;
    }
}


