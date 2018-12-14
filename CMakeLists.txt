cmake_minimum_required(VERSION 3.13)
project(chained_list C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(chained_list
        ft_list.h
        main.c
        ft_create_elem.c
        ft_list_push_back.c ft_list_push_front.c ft_list_size.c ft_list_last.c ft_list_push_params.c ft_list_clear.c ft_list_at.c ft_list_reverse.c ft_list_foreach.c ft_list_foreach_if.c ft_list_find.c ft_list_remove_if.c)
