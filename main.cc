#include "main.h"


int execute_contact_system(int option)
{   
    int ret_code;
    switch (option)
    {
        case ADD_A_CONTACT :
            ret_code = add_contact();
            break;
        case DELETE_A_CONTACT : 
            ret_code = delete_contacts();
            break;
        case SHOW_ALL_CONTACTS :
            ret_code = show_all_contacts();
            break;
    }
    return ret_code;
}

int accept_input()
{
    int input;
    std::cout << "Plese choose an action and input number before option:" << std::endl;
    std::cin >> input;
    if (std::cin.fail())
    {
        std::cout << "You should input a number!" << std::endl;
        return NO_CHOICE;
    }
    return input;
}



int main()
{
    int ret_code;
    //contact_init();
    print_menu();
    while(input_number = accept_input())
    {
        if (input_number == NO_CHOICE || input_number >= CHOICE_MAX)
        {
            std::cout << "Please choose a valid number of choice." << std::endl;
        }
        if (QUIT_SYSTEM == input_number)
        {   
            ret_code = NORMAL_QUIT;
            std::cout << "Quit from system..." << std::endl;
            break;
        }
        ret_code = execute_contact_system(input_number);
    }
    if (ret_code != NORMAL_QUIT)
    {
        std::cout << "An error has occurred and system will quit." << std::endl;
    }
    //free(con);
    delete [] con;
    return ret_code;
}
