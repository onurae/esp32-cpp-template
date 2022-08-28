/******************************************************************************************
*                                                                                         *
*    ESP32 C++ Template Project                                                           *
*                                                                                         *
*    Copyright (c) 2022 Onur AKIN <https://github.com/onurae>                             *
*    Licensed under the MIT License.                                                      *
*                                                                                         *
******************************************************************************************/

#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <iostream>

extern "C"
{
    void app_main();
}

void app_main(void)
{
    std::cout << "Hi!" << std::endl;
}