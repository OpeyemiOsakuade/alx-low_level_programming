/**
 * array_iterator - function designed to iterate
 * over an array of integers and apply a given
 * function to each element of the array
 * @array: array on which the function will operate
 * @size: size of the array
 * @action: A pointer to the function that takes a single
 * integer as an argument and returns nothing
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	for(i = 0; i < size; i++)
	{
		/*apply the fuction-action to every element in the array*/
		action(array[i]);
	}
}
