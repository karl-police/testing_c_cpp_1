# Solution like file
project("testing_c_cpp_1")

cmake_minimum_required(VERSION 3.8)

#set_property(GLOBAL PROPERTY USE_FOLDERS ON)

#set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    message("Debug Configuration")

    #if(MSVC)
    #    add_compile_options("/fsanitize=address")
    #    add_link_options("/fsanitize=address")
    #endif()
endif()

# This is needed for "msvc" Sanitize to work. Needs to be added in a CMakeLists.txt of a project, e.g. through include.
# For memory leaks, one can add "_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF)" apparently
#set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")

# There are more compile warnings that can be set up as well



add_subdirectory("c_calculator_test1")


#include("Sources.cmake")