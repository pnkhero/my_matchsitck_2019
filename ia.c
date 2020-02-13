/*
** EPITECH PROJECT, 2020
** ia.c
** File description:
** ia
*/

#include "./include/my.h"

int ia_remove(struct map *m)
{
    int i = 0;
    int j = 0;
    int nb_colss = m->nb_cols;

    while (i < m->nb_rows) {
        while (nb_colss > j) {
            if (m->map[i][nb_colss] == '|') {
                m->map[i][nb_colss] = ' ';
                recap_ia(i);
                return (0);
            }
            nb_colss--;
        }
        nb_colss = m->nb_cols;
        i++;
    }
    return (0);
}

int ia(struct game *g, struct map *m)
{
    my_putstr("AI's turn...\n");
    ia_remove(m);
    printab(m);
    g->end_game = nbr_matches(m);
    if (g->end_game == 0) {
        my_putstr("I lost... snif... but I'll get you next time!!\n");
        return (1);
    }
    return (0);
}