/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:00:16 by fkuyumcu          #+#    #+#             */
/*   Updated: 2025/02/03 15:52:12 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int main(int argc, char **argv)//hata durumlarına bak
{
    t_rules rules;
    
    if(check_args(argc,argv))
    {
        init(argc, argv, &rules);
		create_philos(&rules);
		start_dinner(&rules);
        check_philos(&rules);
        end_philos(&rules);
    }
    else 
    {
        printf("Error");
        return 1;
    }
}

void nietzche(t_rules *rules)//buna bak
{
    philo_print(rules->philos, "is thinking");
	ft_usleep(rules->time_die);
    final_log(0);
}


