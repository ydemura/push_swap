//
//  test_my_list.h
//  push_swap_xcode
//
//  Created by Yuliia Demura on 6/9/21.
//  Copyright © 2021 Yuliia Demura. All rights reserved.
//

#ifndef test_my_list_h
#define test_my_list_h

#include <stdio.h>
#include "my_list.h"
#include "create_int_arry_from_argv.h"


#include <assert.h>
#include <stdlib.h>

t_my_list       *test_create_list(void);
void            test_destroy_list(void);
int             *test_get_numbers_from_argv_to_list(void);
t_my_list       *test_push_front(void);
t_my_list       *test_push_back(void);
void            test_pop_back(void);
void            test_pop_front(void);

#endif /* test_my_list_h */
