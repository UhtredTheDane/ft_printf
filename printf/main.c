/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:13:08 by agengemb          #+#    #+#             */
/*   Updated: 2022/08/04 18:50:55 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/printf.h"

int main()
{
	int annee = 1450;
	char *pays = "France";
	ft_printf("En l'an %d, la %s avait gagné la guerre de Cent Ans\n", annee, pays);
	printf("En l'an %d, la %s avait gagné la guerre de Cent Ans\n", annee, pays);
	
	int *p = &annee;
	ft_printf("Le pointeur p a pour adresse %p\n", p);
	printf("Le pointeur p a pour adresse %p\n", p);

	
	ft_printf("L'annee %d a pour valeur decimal %x ou %X\n", annee, annee, annee);
	printf("L'annee %d a pour valeur decimal %x ou %X\n", annee, annee, annee);
	
	ft_printf("En %s la population representait 50%% de la population europeene en %d\n", pays, annee);
	printf("En %s la population representait 50%% de la population europeene en %d\n", pays, annee);
	
	ft_printf("Le caractere %c est present a 60%% dans les mots de la langue francaise\n", 'a');
	printf("Le caractere %c est present a 60%% dans les mots de la langue francaise\n", 'a');
	
	annee = 1350;
	ft_printf("La guerre de Cent a commence en l'an %i\n", annee);
	printf("La guerre de Cent a commence en l'an %i\n", annee);
	
	annee = -1350;
	ft_printf("La guerre de Cent a commence en l'an %i\n", annee);
	printf("La guerre de Cent a commence en l'an %i\n", annee);
	
	ft_printf("La guerre de Cent a commence en l'an %u\n", annee);
	printf("La guerre de Cent a commence en l'an %u\n", annee);
	
	char *s = NULL;
	int x;
	x = printf("Salut %s");
	printf("x: %d\n", x);
	x = ft_printf("Salut %s");
	ft_printf("x: %d\n", x);
	return (0);
}

