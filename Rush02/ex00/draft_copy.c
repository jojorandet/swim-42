/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draft_copy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 22:20:16 by jrandet           #+#    #+#             */
/*   Updated: 2024/09/08 23:46:31 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int    nb_de_lignes(char *tab)
{
    int    l;
    int    l_count;

    l = 0;
    l_count = 0;
    while (tab[l])
    {
        if (tab[l] == '\n')
            l_count++;
        l++;
    }
    return (l_count + 1);
}

int    main(void)
{
    int    fd;
    int    c_count;
    int    i;
    int    j;
    int    previous_position;
    int    test;
    char    buffer[2];
    char    *tab_final;
    char    **tab_chiffre;
    char    **tab_lettre;

    i = 0;
    j = 0;
    c_count = 0;
    test = 0;
    fd = open("numbers.dict", O_RDONLY);
    if (fd == -1)
    {
        write(1, "CANT OPEN FILE\n", 15);
        return (-1);
    }
    while (read(fd, buffer, 2) > 0)
        c_count++;
    printf("%d", c_count);
    tab_final = malloc(sizeof(char) * (c_count + 1));
    if (!tab_final)
    {
        write(1, "ERROR MALLOC\n", 13);
        close (fd);
        return (-1);
    }
    close (fd);
    fd = open("numbers.dict", O_RDONLY);
    if (fd == -1)
    {
        write(1, "CANT OPEN FILE\n", 15);
        free(tab_final);
        return (-1);
    }
    if(read(fd, tab_final, sizeof(char) * c_count) != c_count)
    {
        write(1, "READ ERROR\n", 11);
        free(tab_final);
        close(fd);
        return (-1);
    }
    tab_final[c_count] = '\0';
    close(fd);
}



   /*int nb_lignes = nb_de_lignes(tab_final);
    tab_chiffre = malloc(sizeof(char *) * nb_lignes);
    tab_lettre = malloc(sizeof(char *) * nb_lignes);
    if (!tab_chiffre || !tab_lettre)
        write(1, "ERROR MALLOC\n", 13);
        free(tab_final);
        return (-1);
    while (tab_final[i])
    {
        previous_position = i;
        while (tab_final[i] && tab_final[i] != ':')
            i++;
        tab_chiffre[j] = malloc(sizeof(char) * (i - previous_position + 1));
        if (!tab_chiffre[j])
        {
            while (test < j)
            {
                free(tab_chiffre[test]);
                free(tab_lettre[test]);
                test++;
            }
            free(tab_chiffre);
            free(tab_lettre);
            free(tab_final);
            return (-1);
        }
        test = 0;
        while (previous_position < i)
        {
            tab_chiffre[j][test] = tab_final[previous_position];
            previous_position++;
            test++;
        }
        tab_chiffre[j][test] = '\0';
        i += 2;
        previous_position = i;
        while (tab_final[i] && tab_final[i] != '\n')
            i++;
        tab_lettre[j] = malloc(sizeof(char) * (i - previous_position + 1));
        if (!tab_lettre[j])
        {
            while (test < j)
            {
                free(tab_chiffre[test]);
                free(tab_lettre[test]);
                test++;
            }
            free(tab_chiffre);
            free(tab_lettre);
            free(tab_final);
            return (-1);
        }
        test = 0;
        while (previous_position < i)
        {
            tab_lettre[j][test] = tab_final[previous_position];
            previous_position++;
            test++;
        }
        tab_lettre[j][test] = '\0';
        if (tab_final[i] == '\n')
            i++;
        j++;
    }
    printf("%s", tab_final);
    i = 0;
    while(i < j)
    {
        free(tab_chiffre[i]);
        free(tab_lettre[i]);
          i++;
    }
    free(tab_chiffre);
    free(tab_lettre);
    free(tab_final);
    return (0);
}*/