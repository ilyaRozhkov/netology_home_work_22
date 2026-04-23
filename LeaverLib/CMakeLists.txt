cmake_minimum_required(VERSION 3.10)
project(LeaverProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Динамическая библиотека
add_library(leaver SHARED LeaverLib.cpp)

# Определяем макрос для экспорта символов (только при сборке библиотеки)
target_compile_definitions(leaver PRIVATE BUILD_LEAVER_LIB)

# Указываем путь к заголовку (текущая директория)
target_include_directories(leaver PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Исполняемое приложение
add_executable(leaver_app leaver.cpp)

# Линкуем библиотеку к приложению
target_link_libraries(leaver_app leaver)

# Приложение тоже должно видеть заголовок
target_include_directories(leaver_app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})