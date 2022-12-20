//
//  test_3_numbers.c
//  push_swap_xcode
//
//  Created by Yuliia Demura on 7/10/21.
//  Copyright © 2021 Yuliia Demura. All rights reserved.
//

#include "test_3_numbers.h"
#include "test_main_algoritm.h"
#include "second_try_nodata.h"
#include "push_swap_functions_with_write.h"
#include "algoritm_first_steps.h"
#include "test_main_algoritm.h"

void    test_numbers_3_5()
{
    int hand_made_argv[3] = {3, 2, 1};
    int hand_made_argv_size = 3;

    t_my_list *a_list;
    
    a_list = create_list();
    int number_counter = 0;
    for (int j = 0; j < hand_made_argv_size; j++)
    {
        push_back(a_list, hand_made_argv[j]);
        number_counter++;
    }
    
    t_my_list *b_list;
    b_list = create_list();
    
    t_data data;
    data.a = a_list;
    data.b = b_list;
    data.number_of_int_total = number_counter;
    data.hand_made_argv_ptr = hand_made_argv;
    data.ops = 0;
    
//    offer_mediana_call_sorting(&data);
    
    destroy_list(data.a);
    destroy_list(data.b);
}

void    test_numbers_3_4()
{
    int hand_made_argv[3] = {3, 1, 2};
    int hand_made_argv_size = 3;

    t_my_list *a_list;
    
    a_list = create_list();
    int number_counter = 0;
    for (int j = 0; j < hand_made_argv_size; j++)
    {
        push_back(a_list, hand_made_argv[j]);
        number_counter++;
    }
    
    t_my_list *b_list;
    b_list = create_list();
    
    t_data data;
    data.a = a_list;
    data.b = b_list;
    data.number_of_int_total = number_counter;
    data.hand_made_argv_ptr = hand_made_argv;
    data.ops = 0;
    
//    offer_mediana_call_sorting(&data);
    
    destroy_list(data.a);
    destroy_list(data.b);
}

void    test_numbers_3_3()
{
    int hand_made_argv[3] = {2, 3, 1};
    int hand_made_argv_size = 3;

    t_my_list *a_list;
    
    a_list = create_list();
    int number_counter = 0;
    for (int j = 0; j < hand_made_argv_size; j++)
    {
        push_back(a_list, hand_made_argv[j]);
        number_counter++;
    }
    
    t_my_list *b_list;
    b_list = create_list();
    
    t_data data;
    data.a = a_list;
    data.b = b_list;
    data.number_of_int_total = number_counter;
    data.hand_made_argv_ptr = hand_made_argv;
    data.ops = 0;
    
//    offer_mediana_call_sorting(&data);
    
    destroy_list(data.a);
    destroy_list(data.b);
}

void    test_numbers_3_2()
{
    int hand_made_argv[3] = {2, 1, 3};
    int hand_made_argv_size = 3;

    t_my_list *a_list;
    
    a_list = create_list();
    int number_counter = 0;
    for (int j = 0; j < hand_made_argv_size; j++)
    {
        push_back(a_list, hand_made_argv[j]);
        number_counter++;
    }
    
    t_my_list *b_list;
    b_list = create_list();
    
    t_data data;
    data.a = a_list;
    data.b = b_list;
    data.number_of_int_total = number_counter;
    data.hand_made_argv_ptr = hand_made_argv;
    data.ops = 0;
    
//    offer_mediana_call_sorting(&data);
    
    destroy_list(data.a);
    destroy_list(data.b);
}

void    test_numbers_3_1()
{
    int hand_made_argv[3] = {1, 3, 2};
    int hand_made_argv_size = 3;

    t_my_list *a_list;
    
    a_list = create_list();
    int number_counter = 0;
    for (int j = 0; j < hand_made_argv_size; j++)
    {
        push_back(a_list, hand_made_argv[j]);
        number_counter++;
    }
    
    t_my_list *b_list;
    b_list = create_list();
    
    t_data data;
    data.a = a_list;
    data.b = b_list;
    data.number_of_int_total = number_counter;
    data.hand_made_argv_ptr = hand_made_argv;
    data.ops = 0;
    
//    offer_mediana_call_sorting(&data);
    
    destroy_list(data.a);
    destroy_list(data.b);
}


void    test_numbers_3_all_variations()
{
    test_numbers_3_1(); // 3 operations for 1 3 2
    test_numbers_3_2(); // 1 operations for 2 1 3
    test_numbers_3_3(); // 1 operations for 2, 3, 1
    test_numbers_3_4(); // 1 operations for 3, 1, 2
    test_numbers_3_5(); // 2 operations for 3, 2, 1
}
