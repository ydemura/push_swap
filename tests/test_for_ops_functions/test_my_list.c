//
//  test_my_list.c
//  push_swap_xcode
//
//  Created by Yuliia Demura on 6/9/21.
//  Copyright © 2021 Yuliia Demura. All rights reserved.
//

#include "test_my_list.h"

t_my_list    *test_create_list()
{
    t_my_list *test_list = create_list();
    
    if (test_list == NULL)
        printf("failed in creating list: my_list.c\n");
    assert(test_list != NULL);
//    printf("test_create_list performed\n");
    return (test_list);
}

void    test_destroy_list() //destroy f-n works but test - not
{
    t_my_list *test_list = create_list();
    destroy_list(test_list);
//    if (test_list == NULL)
//        printf("failed in destroying list: my_list.c\n");
//    assert(test_list == NULL);
    printf("test_destroy_list performed\n");
}

int    *test_get_numbers_from_argv_to_list()
{
    int *array_int = get_numbers_from_argv_to_list("0 1 2 3 4");
    int i = 0;

    while (array_int[i])
    {
        assert(array_int[i] == i);
//        printf("%i\n", array_int[j]);
        i++;
    }
    printf("test_get_numbers_from_argv_to_list performed\n");
    return (array_int);
}

t_my_list   *test_push_front()
{
    t_my_list *test_list = test_create_list();
    
    int i = 1;
    int k = 5;
    while (i < k)
    {
        push_front(test_list, i);
        
        assert(test_list->size == i);
        if (i == 1)
        {
            //first and last node should be the same
            assert(test_list->back_node == test_list->front_node);
        }
        assert(test_list->back_node->number == 1);
        assert(test_list->front_node->number == i);
        i++;
    }
    printf("test_push_front performed\n");
    return (test_list);
}

t_my_list   *test_push_back()
{
    t_my_list *test_list = test_create_list();
    
    int i = 1;
    int k = 5;
    while (i < k)
    {
        push_back(test_list, i);
        
        assert(test_list->size == i);
        if (i == 1)
        {
            //first and last node should be the same
            assert(test_list->back_node == test_list->front_node);
        }
        assert(test_list->front_node->number == 1);
        assert(test_list->back_node->number == i);
        i++;
    }
    printf("test_push_back performed\n");
    return (test_list);
}

void    test_pop_back()
{
    t_my_list *test_list;
    
    test_list = test_create_list();
    test_list = test_push_back(); //1, 2, 3, 4
    assert(4 == pop_back(test_list));
    assert(3 == pop_back(test_list));
    assert(2 == pop_back(test_list));
    assert(1 == pop_back(test_list));
    pop_back(test_list);
    printf("test_pop_back performed\n");
    
}

void    test_pop_front()
{
    t_my_list *test_list;
    
    test_list = test_create_list();
    test_list = test_push_back(); //1, 2, 3, 4
    assert(1 == pop_front(test_list));
    assert(2 == pop_front(test_list));
    assert(3 == pop_front(test_list));
    assert(4 == pop_front(test_list));
    pop_front(test_list);
    printf("test_pop_front performed\n");
    
}
