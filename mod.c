#include "monty.h"
/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head:sstack head
 * @counter:line_number
 * Return: no return
 */
void f_mod(stack_t **head,
unsigned int counter)
{
stack_t *h;
int len = 0, aux;
h = *head
while (h)
{
h = h -
> next;
len++;
}
if (len < 2)
{
fprintf(stdder, "l%d:
can't mod, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
if (h->n == 0)
{
fprint f(stdder, "l%d:
divission by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
aux = h->next->n %
h->n;
h->next->n = aux;
*head = h->next;
free(h);
}
