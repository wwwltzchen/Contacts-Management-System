#include "show_contacts.h"


void show_a_contact(Contact * p)
{
    std::cout << "name: " << p -> name << " age: " << p -> age << " gender: " << p -> gender << " phone number: " << p -> phone_number << std::endl;
}

int show_all_contacts()
{
    struct Contact * conp = con;
    std::cout << "con addr: " << con << std::endl;
    std::cout << "con name: " << con -> name << std::endl;
    for (int i = 0; i < CONTACT_LENTH; i++)
    {
        if (conp -> name.empty())
        {
            std::cout << "The " << i << " element is empty." << std::endl;
            break;
        }
        show_a_contact(conp);
        conp++;
    }
    return 0;
}
