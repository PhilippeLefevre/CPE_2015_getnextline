/*
** get_next_line.h for getnext_line in /home/lefevr_h/Repository/Epitech/First_1/Elementary_Programming/CPE_2015_getnextline
** 
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
** 
** Started on  Thu Mar  3 02:20:36 2016 Lefevre Philippe
** Last update Thu Mar  3 02:20:38 2016 Lefevre Philippe
*/

#ifndef			GET_NEXT_LINE_H_
# define		GET_NEXT_LINE_H_
# include		<unistd.h>
# include		<stdlib.h>
# include		<errno.h>

# ifndef		READ_SIZE
#  define		READ_SIZE	(14)
# endif			/* !READ_SIZE */

char			*my_realloc(char *cur, int n);
char			*get_next_line(const int fd);

#endif			/* !GET_NEXT_LINE_H_ */
