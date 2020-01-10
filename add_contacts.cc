#include "add_contacts.h"


int append_write(Contact con_input)
{
    struct Contact * conp = con;
    for (int i = 0; i < CONTACT_LENTH; i++)
    {
        if (conp -> name.empty())
        {
            conp -> name = con_input.name;
            conp -> age = con_input.age;
            conp -> gender = con_input.gender;
            conp -> phone_number = con_input.phone_number;
            break;
        }
        conp++;
    }
    return NORMAL_QUIT;
}

int add_contact()
{
    std::string str;
    int i;
    Contact cont;
    std::cout << "Start add a contact..." << std::endl;
    std::cout << "Please input contact name:" << std::endl;
    std::cin.ignore();
    std::getline(std::cin, str);
    //std::cin >> str;
    cont.name = str;
    std::cout << "Please input contact age:" << std::endl;
    std::cin >> i;
    cont.age = i;
    std::cout << "Please input contact gender: " << MALE_INDEX << ":male; " << FEMALE_INDEX << ":female" << std::endl;
    std::cin >> i;
    cont.gender = i;
    std::cout << "Please input contact phone number:" << std::endl;
    std::cin >> str;
    cont.phone_number = str;
 //   std::cout << "name: " << cont.name << " age: " << cont.age << " gender: " << cont.gender << " phone number: " << cont.phone_number << std::endl;
    i = append_write(cont);
    return i;
}
