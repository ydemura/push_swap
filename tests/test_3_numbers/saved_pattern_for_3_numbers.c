//
//  saved_pattern_for_3_numbers.c
//  push_swap_xcode
//
//  Created by Yuliia Demura on 7/10/21.
//  Copyright © 2021 Yuliia Demura. All rights reserved.
//

#include "saved_pattern_for_3_numbers.h"
#include "second_try_nodata.h"
#include "algoritm_first_steps.h"
#include "push_swap_functions_with_write.h"
#include "push_swap_f_no_datastruct.h"
#include "mergesort.h"
#include "quicksort.h"

//
//int        print_array_SV(int *array, int array_size)
//{
//    printf("\n");
//    int i = 0;
//
//    while (i < array_size)
//    {
//        printf("%i ", array[i]);
//        i++;
//    }
//    printf("\n");
//    return (0);
//}
//
//
//int        check_if_smaller_then_mediana_left_SV(int mediana, t_my_list *list)
//{
//    t_list_node *tmp_head;
//    int i;
//
//    i = 0;
//    tmp_head = list->front_node;
//    while (i < list->size)
//    {
//        if (tmp_head->number < mediana)
//            return (1); //smaller then mediana number found
//        tmp_head = tmp_head->next;
//        i++;
//    }
//
//
//    return (0); //nothing left
//}
//
//int     check_if_the_first_num_is_bigges_SV(int max, t_my_list *list)
//{
//    t_list_node *tmp_head;
//    int i;
//
//    i = 0;
//    tmp_head = list->front_node;
//    while (i < list->size)
//    {
//        if (tmp_head->number > max)
//            return (1); //smaller then mediana number found
//        tmp_head = tmp_head->next;
//        i++;
//    }
//
//    return (0);
//}
//
//
//
//int        swap_or_rotate_blist_SV(t_my_list *a, t_my_list *b)
//{
//    int num_ops = 0;
//
//
//    if (b->size >= 2 && b->front_node->number < b->front_node->next->number)
//    {
//            ///    check if last in B is bigger then 1st in B. if yes, reverserotate it + rrotate A
//        if (b->back_node->number > b->front_node->number)
//        {
//            while (a->back_node->number < a->front_node->number)
//            {
//                reverse_rotate_nodata(a, b, '2');
//                num_ops++;
//                        printf("\nlist a: ");
//                        print_lists_numbers(a);
//                        print_lists_numbers(b);
//            }
//            while (b->back_node->number > b->front_node->number)
//            {
//                reverse_rotate_nodata(a, b, 'b');
//                num_ops++;
//            }
//                        printf("\nlist b: ");
//                        print_lists_numbers(b);
//        }
//
//        if (b->front_node->number < b->front_node->next->number)
//        {
//            if (a->front_node->number < a->front_node->next->number)
//            {
//                swap_nodata(a, b, '2');
//                num_ops++;
//                        printf("\nlist a: ");
//                        print_lists_numbers(a);
//                        printf("\nlist b: ");
//                        print_lists_numbers(b);
//            }
//            else
//            {
//                swap_nodata(a, b, 'b');
//                num_ops++;
//
//                        printf("\nlist b: ");
//                        print_lists_numbers(b);
//            }
//        }
//
//
//    }
//
//    return (num_ops);
//}
//
//
//int     sort_array_SV(t_my_list *a, t_my_list *b, int mediana, int number_of_int_total)
//{
//    int num_ops;
//
//    num_ops = 0;
//    ///    old while condition: (check_the_order(a) == 1 && a->size > number_of_int_total/2 && a->size > 2)
//        while (check_if_smaller_then_mediana_left_SV(mediana, a) == 1
//               && check_the_order(a) == 1 && a->size > number_of_int_total/2 && a->size > 2)
//    {
//        if (a->front_node->number < mediana)
//        {
//            push_nodata(a, b, 'b');
//            num_ops++;
//                    printf("\nlist a: ");
//                    print_lists_numbers(a);
//                    printf("list B: ");
//                    print_lists_numbers(b);
//            num_ops += swap_or_rotate_blist_SV(a, b);
//
//        }
//        else if (check_if_the_first_num_is_bigges_SV(a->front_node->number, a) == 0)
//        {
//            rotate_nodata(a, b, 'a');
//            num_ops++;
//                    printf("\nlist a: ");
//                    print_lists_numbers(a);
//        }
//        else if (a->front_node->number > a->front_node->next->number)
//        {
//            swap_nodata(a, a, 'a');
//            num_ops++;
//                    printf("\nlist a: ");
//                    print_lists_numbers(a);
//        }
//        else
//        {
//            if (b->size >= 2 && b->front_node->number < b->back_node->number)
//            {
//                reverse_rotate_nodata(a, b, '2');
//                num_ops++;
//                        printf("\nlist a: ");
//                        print_lists_numbers(a);
//                        printf("\nlist b: ");
//                        print_lists_numbers(b);
//            }
//            else
//            {
//                reverse_rotate_nodata(a, b, 'a');
//                num_ops++;
//                        printf("\nlist a: ");
//                        print_lists_numbers(a);
//            }
//
//        }
//    }
//    return (num_ops);
//}
//
//int        offer_mediana_call_sorting_SV(t_data *data)
//{
//    int mediana;
//    int int_number;
//    int num_ops;
//
//    num_ops = 0;
//
//    int_number = data->number_of_int_total; ///    take away - 1
//            printf("\narray before 1st sort: ");
//            print_array_SV(data->hand_made_argv_ptr, int_number);
////            printf("\narray after quick sort: ");
//    quicksort(data->hand_made_argv_ptr, 0, int_number - 1);
////            print_array(data->hand_made_argv_ptr, int_number);
////            printf("\n");
//    mediana = data->hand_made_argv_ptr[int_number/2];
//            printf("mediana: %i\n", mediana);
//
//    while (check_the_order(data->a) == 1 && data->a->size > 2) ///    until A is sorted
//    {
//        num_ops += sort_array(data->a, data->b, mediana, int_number);
//        int_number /= 2;
//        mediana = data->hand_made_argv_ptr[data->number_of_int_total - 1 - (int_number / 2)];
//            printf("list_a");
//            print_lists_numbers(data->a);
//            printf("list_b");
//            print_lists_numbers(data->b);
//            printf("mediana: %i\n", mediana);
//    }
//    if (check_the_order(data->a) == 1 && data->a->size == 2)
//    {
//        swap_nodata(data->a, data->b, 'a');
//        num_ops++;
//    }
//    if (check_the_order(data->b) == 0 && data->b->size > 0) //if B is sorted
//    {
//        //put all from B to A one by one
//        while (data->b->size > 0)
//        {
//            push_nodata(data->a, data->b, 'a');
//            num_ops++;
//        }
//    }
//    else
//    {
//        while (data->b->size > 0)
//        {
//            if (data->b->size == 1 || data->b->front_node->number > data->b->front_node->next->number)
//            {
//                push_nodata(data->a, data->b, 'a');
//                num_ops++;
//            }
//            else
//            {
//                swap_nodata(data->a, data->b, 'b');
//                push_nodata(data->a, data->b, 'a');
//                num_ops++;
//            }
//        }
//
//    }
//
//    printf("\nNUM_OPS: %i\n\n", num_ops);
//    if (check_the_order(data->a) == 0)
//    {
//        printf("OK");
//        print_lists_numbers(data->a);
//    }
//    else
//    {
//        printf("MISTAKE IN SORT");
//        print_lists_numbers(data->a);
//    }
//
//
//    return (0);
//}
