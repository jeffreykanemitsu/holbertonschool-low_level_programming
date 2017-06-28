<p align="center">
<img src="https://pbs.twimg.com/profile_images/644908719050850305/LbLzZ2vf.jpg" alt="Holberton's logo"/>
</p>

# Title #

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
	  * [Mandatory 5](#mandatory-5)
	  * [Mandatory 6](#mandatory-6)
	  * [Mandatory 7](#mandatory-7)
	  * [Mandatory 8](#mandatory-8)
	  * [Mandatory 9](#mandatory-9)
	  * [Mandatory 10](#mandatory-10)

### Author ###
* Jeffrey Kanemitsu
	* https://github.com/jeffreykanemitsu
	* https://twitter.com/canofmisosoup

### Description ###
A linked list is an ordered set of data elements, each containing a link to its successor and sometimes its predecessor.
### Objectives ###
* Understand how to use linked lists.
* Learn how to look for the right sources of information without too much help

### Compilation ###
* Your programs and functions will be compiled with `gcc 4.8.4` using the flags
`-Wall` `-Werror` `-Wextra` and `-pedantic`
### Requirements ###
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc, etc... is forbidden.
* You are allowed to use `_putchar`.
* All your header files should be include guarded
* Use data structure provided for this project:
```C
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```
### Tasks ###
#### Mandatory 0 ####
0. **Print list**
	* [ ] Write a function that prints all the elements of a `listint_t` list.
	* [ ] Prototype: `size_t print_listint(const listint_t *h);`
	* [ ] Return: the number of nodes
	* [ ] You are allowed to use `printf`
#### Mandatory 1 ####
1. **List length**
	* [ ] Write a function that returns the number of elements in a linked `listint_t` list.
	* [ ] Prototype: `size_t listint_len(const listint_t *h);`
#### Mandatory 2 ####
2. **Add node**
	* [ ] Write a function that adds a new node at the beginning of a `listint_t` list.
	* [ ] Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
	* [ ] Return: the address of the new element, or `NULL` if it failed
#### Mandatory 3 ####
3. **Add node at the end**
	* [ ] Write a function that adds a new node at the end of a `listint_t` list.
	* [ ] Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
	* [ ] Return: the address of the new element, or `NULL` if it failed
#### Mandatory 4 ####
4. **Free list**
	* [ ] Write a function that free a `listint_t` list.
	* [ ] Prototype: `void free_listint(listint_t *head);`
#### Mandatory 5 ####
5. **Free**
	* [ ] Write a function that free a `listint_t` list.
	* [ ] Prototype: `void free_listint2(listint_t **head);`
	* [ ] The function sets the `head` to `NULL`
#### Mandatory 6 ####
6. **Pop**
	* [ ] Write a function that deletes the head node of a `listint_t` linked list, and returns the head node's data (n).
	* [ ] Prototype: `int pop_listint(listint_t **head);`
	* [ ] if the linked list is empty, return `0`
#### Mandatory 7 ####
7. **Get node at index**
	* [ ] Write a function that returns the nth node of a `listint_t` linked list.
	* [ ] Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)`
	* [ ] Where `index` is the index of the node, starting at `0`
	* [ ] If the node does not exist, return `NULL`
#### Mandatory 8 ####
8. **Sum list**
	* [ ] Write a function that returns the sum of all the data (n) of a `listint_t` linked list.
	* [ ] Prototype: `int sum_listint(listint_t *head);`
	* [ ] If the list is empty, return `0`
#### Mandatory 9 ####
9. **Insert**
	* [ ] Write a function that inserts a new node at a given position.
	* [ ] Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
	* [ ] Where `idx` is the index of the list where the new node should be added. Index starts at `0`
	* [ ] Returns: the address of the new node, or `NULL` if it failed
	* [ ] If it is not possible to add he new node at index `idx`, do not add the new node and return `NULL`
#### Mandatory 10 ####
10. **Delete at index**
	* [ ] Write a function that deletes the node at index `index` of a `listint_t` linked list.
	* [ ] Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
	* [ ] Where `index` is the index of the node that should be deleted. Index starts at `0`
	* [ ] Returns: `1` if it succeeded, `-1` if it failed
