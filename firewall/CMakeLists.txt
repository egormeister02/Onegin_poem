cmake_minimum_required(VERSION 2.8) # Проверка версии CMake.
									# Если версия установленой программы
									# старее указаной, произайдёт аварийный выход.

project(Onegin LANGUAGES CXX)				# Название проекта

set(SOURCE_LIB Onegin_functions.cpp)		# Установка переменной со списком исходников

add_library(Onegin STATIC ${SOURCE_LIB})# Создание статической библиотеки