#include "main.h"
<<<<<<< HEAD

#include <stdio.h>

#include <stdlib.h>



/**

 * _strdup - Entry point

 *@str: string we need to duplicate

 * Return: a pointer to the duplicated string or NULL

 */

char *_strdup(char *str)
  
{
  
  char *strnew = NULL;
  
  unsigned int i;
  
  int n;
  

  
  if (str == NULL)
    
    return (NULL);
  
  for (n = 0; str[n] != '\0'; n++)
    
    ;
  
  strnew = (char *)malloc(n + 1 * sizeof(char));
  
  if (strnew != NULL)
    
    {
      
      for (i = 0; str[i] != '\0'; i++)
	
	strnew[i] = str[i];
      
    } else
      
    {
      
      return (NULL);
      
    }
  
  strnew[i] = '\0';
  
  return (strnew);
  
}
=======
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 *@str: string we need to duplicate
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *strnew = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	strnew = (char *)malloc(n + 1 * sizeof(char));
	if (strnew != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			strnew[i] = str[i];
	} else
	{
		return (NULL);
	}
	strnew[i] = '\0';
	return (strnew);
}
>>>>>>> 535ec48449b786eb1a27439af422cef30c195f56
