/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:35:22 by cmakario          #+#    #+#             */
/*   Updated: 2023/11/06 20:02:56 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node. Creates a new
// list resulting of the successive applications of
// the function ’f’. The ’del’ function is used to
// delete the content of a node if needed.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_data;
	t_list	*new_list;


	if (lst == NULL || *f == NULL || f == NULL || *del == NULL )
		return (NULL);
	while (lst)
	{
		new_data = ft_lstnew((*f)(lst->content));
		if (new_data == NULL)
			return (NULL);
		ft_lstclear(&new_list, (*del));
		ft_lstadd_back(&new_list, new_element);
		lst = lst->next;
		
	}

	count = ft_lstsize(lst);
	while (i < count)
	{
		ft_lstiter(lst,*)
	}
	
}


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_element;
	t_list	*new_list;

	new_list = NULL;
	if ((*f) == NULL || (*del) == NULL)
		return (NULL);
	while (lst != NULL)
	{
		if (!(new_element = ft_lstnew((*f)(lst->content))))
		{
			if (new_element != NULL)
				ft_lstclear(&new_list, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		lst = lst->next;
	}
	return (new_list);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_element; // Create a new element to store transformed content.
    t_list *new_list; // Initialize a new linked list to store the transformed elements.

    new_list = NULL; // Initialize the new list as empty.

    // Check if the provided function pointers 'f' and 'del' are NULL.
    if ((*f) == NULL || (*del) == NULL)
        return (NULL); // If either of them is NULL, return NULL.

    // Iterate through the input linked list 'lst'.
    while (lst != NULL)
    {
        // Apply the function 'f' to the content of the current node and create a new element.
        if (!(new_element = ft_lstnew((*f)(lst->content)))
        {
            // If the creation of a new element fails, handle errors and cleanup.

            if (new_element != NULL)
                ft_lstclear(&new_list, (*del)); // Clear the new list using the 'del' function.

            return (NULL); // Return NULL to indicate an error.
        }

        ft_lstadd_back(&new_list, new_element); // Add the new element to the new list.
        lst = lst->next; // Move to the next node in the input list.
    }

    return (new_list); // Return the new list containing the transformed data.
}



t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_element; // Create a new element to store transformed content.
    t_list *new_list; // Initialize a new linked list to store the transformed elements.

    new_list = NULL; // Initialize the new list as empty.

    // Check if the provided function pointers 'f' and 'del' are NULL.
    if ((*f) == NULL || (*del) == NULL)
        return (NULL); // If either of them is NULL, return NULL.

    // Iterate through the input linked list 'lst'.
    while (lst != NULL)
    {
        // Apply the function 'f' to the content of the current node.
        void *transformed_content = (*f)(lst->content);
        
        // Create a new element with the transformed content.
        new_element = ft_lstnew(transformed_content);

        if (new_element == NULL)
        {
            // If the creation of a new element fails, handle errors and cleanup.
            if (new_element != NULL)
                ft_lstclear(&new_list, (*del)); // Clear the new list using the 'del' function.
            return (NULL); // Return NULL to indicate an error.
        }

        ft_lstadd_back(&new_list, new_element); // Add the new element to the new list.
        lst = lst->next; // Move to the next node in the input list.
    }

    return (new_list); // Return the new list containing the transformed data.
}
