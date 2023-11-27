/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlinkedlist.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:39:27 by sforster          #+#    #+#             */
/*   Updated: 2023/11/27 11:57:33 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

// stucture
struct node {
		int	value;
// add a next pointer
		struct node* next;
};
//definition de type et de structure
typedef struct node node_t;

// fonction qui imprime la liste
void	printliste(node_t *head)
{
	node_t	*temporary;

	temporary = head;
	while (temporary != NULL)
	{
		printf("%d - ", temporary->value);
		temporary = temporary->next;
	}
	printf("\n");
}
int main(void)
{
	node_t	n1, n2, n3;
	node_t	*head;

	n1.value = 45;
	n2.value = 8;
	n3.value = 32;

// link them up dans l ordre n3 - n2 - n1
// pointer sur n3
	head = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;
	printliste(head);
// so we know when to stop.
	return 0;
}