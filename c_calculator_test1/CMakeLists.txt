project("c_calculator_test1" C)

# Make output directly under binary directory output
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_executable("c_calculator_test1")

target_sources("c_calculator_test1" PRIVATE
	"main.c"

	"Calculator.h"
	"Calculator.c"
)