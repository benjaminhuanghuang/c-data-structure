
#include <stdlib.h>

#include "stats.h"

int main()
{
	struct stats *first;
	struct stats *current;
	struct stats *new;		/* Change name if necessary */
	int x = 5;

	/* create first structure */
	first = create();
	current = first;

	for(x=0;x<5;x++)
	{
	    if(x==0)
        {

            first = create();
            current = first;
        }
        else
        {
            new = create();
            current->next = new;
            current = new;
        }
		fill_structure(current);
	}
	current->next = NULL;

	current = first;		/* reset the list */
	while(current)
	{
		printf("Account %05d:\t$%.2f\n",
				current->account,
				current->balance);
		current = current->next;
	}

	return(0);
}


