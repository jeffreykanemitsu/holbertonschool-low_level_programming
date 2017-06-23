<p align="center">
<img src="https://pbs.twimg.com/profile_images/644908719050850305/LbLzZ2vf.jpg" alt="Holberton's logo"/>
</p>

# 0x11. C - Singly linked lists #

* [Table of Contents](#table-of-contents) 
	* [Author](#Author)	
	* [Description](#description)
	* [Objectives](#objectives)
	* [Compilation](#compilation)
	* [Requirements](#requirements)
	* [Tasks](#tasks)
	  * [Mandatory 0](#mandatory-0)
	  * [Mandatory 1](#mandatory-1)
	  * [Mandatory 2](#mandatory-2)
	  * [Mandatory 3](#mandatory-3)
	  * [Mandatory 4](#mandatory-4)

### Author ###
* Jeffrey Kanemitsu
	* https://github.com/jeffreykanemitsu
	* https://twitter.com/canofmisosoup

### Description ###
A linked list is an ordered set of data elements, each containing a link to its successor and sometimes its predecessor.

### Objectives ###
* Understand when and why we use linked lists vs arrays.
* Understand how to build and use linked lists

### Compilation ###
* Your programs and functions will be compiled with `gcc 4.8.4` using the flags
`-Wall` `-Werror` `-Wextra` and `-pedantic`

### Requirements ###
* You are not allowed to use global variables
* No more than 5 functions
* The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc, etc... is forbidden.
* You are allowed to use `_putchar`.
* Use data structure provided for this project:
```C
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```
### Tasks ###
#### Mandatory 0 ####
0. **Print list**
	* [ ] Write a function that prints all the elements of a `list_t` list.
	* [ ] Prototype: `size_t print_list(const list_t *h);`
	* [ ] Return: the number of nodes
	* [ ] You are allowed to use `printf`
#### Mandatory 1 ####
1. **List length**
	* [ ] Write a function that returns the number of elements in a linked `list_t` list.
	* [ ] Prototype: `size_t list_len(const list_t *h);`
#### Mandatory 2 ####
2. **Add node**
	* [ ] Write a function that adds a new node at the beginning of a `list_t` list.
	* [ ] Prototype: `list_t *add_node(list_t **head, const char *str);`
	* [ ] Return: the address of the new element, or NULL if failed
	* [ ] `str` needs to be duplicated
	* [ ] You are allowed to use `strdup`
#### Mandatory 3 ####
3. **Add node at the end**
	* [ ] Write a function that adds a new node at the end of a `list_t` list.
	* [ ] Return: the address of the new element, or NULL if it failed
	* [ ] `str` needs to be duplicated
	* [ ] You are allowed to use `strdup`
#### Mandatory 4 ####
4. **Free list**
	* [ ] Write a function that free a `list_t` list
	* [ ] Prototype: `void free_list(list_t *head);`
