#ifndef __STD_LIB_USED
#define __STD_LIB_USED
#include "std_lib.h"
#endif

#ifndef __SYS_STATUS
#define __SYS_STATUS
#include "contact_format.h"
#include "sys_status.h"
#endif

#include "contact_menu.h"
#include "contact_exit.h"
#include "add_contacts.h"
#include "show_contacts.h"
#include "delete_contacts.h"
#include "find_contacts.h"
#include "modify_contacts.h"
#include "clear_contacts.h"

const int CHOICE_MAX = 7;
const int NO_CHOICE = 0;
const int ADD_A_CONTACT = 1;
const int DELETE_A_CONTACT = 2;
const int MODIFY_A_CONTACT = 3;
const int FINDOUT_CONTACT_BY_NAME = 4;
const int SHOW_ALL_CONTACTS = 5;
const int QUIT_SYSTEM = 6;

int input_number;
