/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:00:19 by fkuyumcu          #+#    #+#             */
/*   Updated: 2025/02/01 18:48:01 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
#include <sys/time.h>//gettimeofday

int		check_args(int argc, char **argv);
void	ferror(char *s);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
int		ft_isnum(char *str);
int		ft_strlen(const char *str);
void	f_init(int argc, char **argv, t_rules *rules);
void	create_philos(t_rules *rules);
int		ft_usleep(size_t milliseconds);


typedef pthread_mutex_t t_mutex;

typedef struct s_philo
{
    int             id;
    t_mutex			*left_fork;
    t_mutex			*right_fork;
    long            last_meal;
    int             meals_eaten;
    t_rules          *data;
    pthread_t       thread_id;

} t_philo;

typedef struct s_rules
{
    int 			num_philo;
	int				time_die;
	int				time_eat;
	int				time_sleep;
	int				num_meals;
	int				is_finish;//bir filozof öldüğünde ya da hepsi doyduğunda bu flag 1 olur.
	t_mutex			*forks;
	long			start_time;
	t_philo			*philos;
	
} t_rules;


#endif