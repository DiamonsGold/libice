/*
** EPITECH PROJECT, 2022
** libice
** File description:
** ice_strcat.c
*/

#include "ice/string.h"

void ice_strcat(char *dest, const char *src)
{
    ice_strcpy((dest + ice_strlen(dest)), src);
}
