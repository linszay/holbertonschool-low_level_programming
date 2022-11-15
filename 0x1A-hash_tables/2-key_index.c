#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: pointer
 * @size: array size
 * Return: index where the key is stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int find_idx;

	find_idx = hash_djb2(key);
	return (find_idx % size);
}
