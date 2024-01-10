void *ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void *new_ptr;

	if (ptr == NULL)
		return malloc(new_size);
	if (!new_size)
	{
		free(ptr);
		return NULL;
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
	{
		perror("Memory allocation failed for realloc.\n");
		exit(EXIT_FAILURE);
	}
	size_t copy_size = (old_size < new_size) ? old_size : new_size;
	ft_memcpy(new_ptr, ptr, copy_size);
	free(ptr);
	return new_ptr;
}
