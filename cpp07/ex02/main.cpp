/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:47:04 by faveline          #+#    #+#             */
/*   Updated: 2024/03/20 15:12:31 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
		for (int i = 0; i < MAX_VAL; i++)
		{
			if (tmp[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		for (int i = 0; i < MAX_VAL; i++)
		{
			if (test[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "inf to 0, " << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "sup to size, " << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;

	try
	{
		size_t			size = 5;
		Array<char> testC(size);
		const Array<int> testI(size);
		Array<float> testF(size);
		Array<std::string> testS(size);
		Array<int> testV;
		
		std::cout << testC[0] << std::endl;
		std::cout << testI[0] << std::endl;
		std::cout << testF[0] << std::endl;
		std::cout << testS[0] << std::endl;
		
		try
		{	
			std::cout << testV[0] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Empty array, " << e.what() << '\n';
		}

		std::cout << std::endl;
		
		for (size_t i = 0; i < size; i++)
			testC[i] = 98 + i;
		for (size_t i = 0; i < size; i++)
			testI[i] = 98 + i;
		for (size_t i = 0; i < size; i++)
			testF[i] = 98 + i;
		for (size_t i = 0; i < size; i++)
			testS[i] = "Hello";

		for (size_t i = 0; i < size; i++)
			std::cout << testC[i] << std::endl;
		for (size_t i = 0; i < size; i++)
			std::cout << testI[i] << std::endl;
		for (size_t i = 0; i < size; i++)
			std::cout << testF[i] << std::endl;
		for (size_t i = 0; i < size; i++)
			std::cout << testS[i] << std::endl;

		std::cout << std::endl;
		
		Array<float> testE(size * 2);

		for (size_t i = 0; i < size * 2; i++)
			testE[i] = 48 + i;
		testE = testF;
		for (size_t i = 0; i < size; i++)
			std::cout << testE[i] << " " << testF[i] << std::endl;
		for (size_t i = size; i < size * 2; i++)
			std::cout << testE[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Mistake somewhere, " << e.what() << '\n';
	}
    return 0;
}