#include <stdio.h>
#include <stdlib.h>

/**
 *  * str_concat - a function that concatenates two strings
 *   *
 *    * @s1: first string pointer
 *     * @s2: second string pointer
 *      *
 *       * Return: if NULL is passed, treat it as an empty string
 *        * The function should return NULL on failure
 *         */

char *str_concat(char *s1, char *s2)
{
		int i, j;
			int size1 = 0;
				int size2 = 0;
					char *strArray;

						if (s1 == NULL)
									s1 = "";

							if (s2 == NULL)
										s2 = "";

								while (s1[size1] != '\0')
										{
													size1++;
														}

									while (s2[size2] != '\0')
											{
														size2++;
															}

										strArray = malloc(sizeof(char) * (size1 + (size2 + 1)));

											if (strArray == NULL)
													{
																return (NULL);
																	}

												for (i = 0; i < size1; i++)
														{
																	strArray[i] = s1[i];
																		}

													for (j = 0; j < size2; j++)
															{
																		strArray[i + j] = s2[j];
																			}
														return (strArray);
}
