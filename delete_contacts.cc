#include "delete_contacts.h"

void contact_p_init(struct Contact * conp)
{
    conp -> name.clear();
    conp -> age = AGE_INIT;
    conp -> gender = GENDER_INIT;
    conp -> phone_number.clear();
}


void rearrange_list()
{
    struct Contact * conp1 = con;
    struct Contact * conp2 = con;
    conp2++;
    for (int i = 0; i < CONTACT_LENTH; i++)
    {
        if (conp1 -> name.empty())
        {
            for (int j = i; j < CONTACT_LENTH - 1; j++)
            {
                if (conp2 -> name.empty())
                {
                    continue;
                }
                else
                {
                    std::string tmpstr;
                    conp1 -> name = conp2 -> name;
                    conp1 -> age = conp2 -> age;
                    conp1 -> gender = conp2 -> gender;
                    conp1 -> phone_number = conp2 -> phone_number;
                    contact_p_init(conp2);
                    break;
                }
                conp2++;
            }
        }
        conp1++;
    }
}

void delete_contact_by_name()
{
    std::string str;
    struct Contact * conp = con;
    std::cout << "Please input name you want to delete:" << std::endl;
    std::cin.ignore();
    std::getline(std::cin, str);
    for (int i = 0; i < CONTACT_LENTH; i++)
    {
        if (conp -> name.empty())
        {
            break;
        }
        if (conp -> name == str)
        {
            contact_p_init(conp);
        }
        conp++;
    }
    rearrange_list();
}

void delete_contact_by_age()
{
    int i;
    struct Contact * conp = con;
    std::cout << "Please input age you want to delete:" << std::endl;
    std::cin.ignore();
    std::cin >> i;
    for (int i = 0; i < CONTACT_LENTH; i++)
    {
        if (conp -> name.empty())
        {
            break;
        }
        if (conp -> age == AGE_INIT)
        {
            contact_p_init(conp);
        }
        conp++;
    }
    rearrange_list();
}

void delete_contact_by_gender()
{
    int i;
    struct Contact * conp = con;
    std::cout << "Please input gender you want to delete:" << std::endl;
    std::cin.ignore();
    std::cin >> i;
    for (int i = 0; i < CONTACT_LENTH; i++)
    {
        if (conp -> name.empty())
        {
            break;
        }
        if (conp -> gender == GENDER_INIT)
        {
            contact_p_init(conp);
        }
        conp++;
    }
    rearrange_list();
}

void delete_contact_by_phone_num()
{
    std::string str;
    struct Contact * conp = con;
    std::cout << "Please input phone number you want to delete:" << std::endl;
    std::cin.ignore();
    std::cin >> str;
    for (int i = 0; i < CONTACT_LENTH; i++)
    {
        if (conp -> name.empty())
        {
            break;
        }
        if (conp -> phone_number == str)
        {
            contact_p_init(conp);
        }
        conp++;
    }
    rearrange_list();
}


int delete_contacts()
{
    std::string str;
    int i;
    Contact cont;
    std::cout << "Start delete contacts..." << std::endl;
    std::cout << "Please choose a property you need to delete and input numer before it." << std::endl;
    std::cout << NAME_INDEX << ".name;" << AGE_INDEX << ".age;" << GENDER_INDEX << ".gender;" << PHONE_INDEX << ".phone_number;" << std::endl;
    std::cin >> i;
    switch (i)
    {
        case NAME_INDEX:
            delete_contact_by_name();
            break;
        case AGE_INDEX:
            delete_contact_by_age();
            break;
        case GENDER_INDEX:
            delete_contact_by_gender();
            break;
        case PHONE_INDEX:
            delete_contact_by_phone_num();
            break;
        default:
            std::cout << "Invalid property.";
            return COMMON_ERR;
    }
    return NORMAL_QUIT;
}
    
