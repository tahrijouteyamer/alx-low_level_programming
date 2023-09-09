#include "hash_tables.h"

/**
 * key_index - gets the index at which a key or value
 *      pair should be stored in array of a hash table
 * @key: the key to get the index of the hash table
 * @size: the size of the array of the hash table
 *
 * Return: the index of the key
 * Description: it uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
