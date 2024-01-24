/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbihi <youbihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:30:09 by youbihi           #+#    #+#             */
/*   Updated: 2024/01/24 14:29:49 by youbihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# include <stdlib.h>
# include <limits.h>
# include <fcntl.h>
# include <stdio.h>
# include "libft/libft.h"
# include "mlx.h"
# include <stdio.h>
# include <math.h>

struct Args
{
    int     x0;
    int     y0;
    int     x1;
    int     y1;
};

struct points
{
    int x;
    int y;
    int z;
    int color;
    int space_between;
};

struct algo
{
    int dx;
    int pk;
    int dy;
    int x;
    int y;
    int y1;
    int y0;
};

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

struct dda
{
    int dx;
    int dy;
    int steps;
    float xIncrement;
    float yIncrement;
    float x;
    float y;
    int index;
};

typedef struct s_mlx
{
  void *mlx;
  void *win;  
  t_data img;  
}   t_mlx;

struct pass_to_draw
{
    int x0;
    int y0;
    int x1;
    int y1;
};

struct draw_param
{
    int x;
    int y;
    int x_wall;
    int y_wall;
};


int		ft_line_len(char *str);
char	*ft_line_insert(char *return_line, char *all_line);
char	*line_maker(char *str);
char	*ft_read_lines(int fd, char *all_lines);
char	*get_next_line(int fd);
char	*ft_left_lines(char *all_lines);
char	*ft_strjoin_g(char *left_str, char *buff);
void	swap(int *a, int *b);
int		count_rows(char *s);
void    drawline( int x0, int y0, int x1, int y1, int color, t_mlx *env);
void	count_rows_coluns(int *x, int *y,char *argv);
int     func0(const char *s, int i, int neg);
int     ft_atoi_hex(const char *s);
int     isHexDigit(char c);
void    fill_data(struct points **data, int c, int r,char *argv);
int     func(char c);
void    allocate_data(struct points ***data, int column, int row);
void    iso(int *x, int *y, int z);
void    change_data(struct points **data,char *argv);
void    iso_maker(struct points **data,int x, int y);

#endif