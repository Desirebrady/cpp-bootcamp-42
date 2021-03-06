/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:02:22 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 10:03:14 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main()
{
    Logger		logger1("logger1.log");
	Logger		logger2("logger2.log");

	logger1.log("console", "Log test of LOGGER1 to console");
	logger1.log("file", "Log test of LOGGER1 to log file (1/2)");
	logger1.log("file", "Log test of LOGGER1 to log file (2/2)");

	logger2.log("console", "Log test of LOGGER2 to console");
	logger2.log("file", "Log test of LOGGER2 to log file (1/2)");
	logger2.log("file", "Log test of LOGGER2 to log file (2/2)");
    return (0);
}
