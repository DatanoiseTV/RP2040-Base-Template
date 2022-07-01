
add_library(oled_ssd1306 STATIC
	src/oled.cpp
)

target_include_directories(oled_ssd1306 PUBLIC
	${CMAKE_CURRENT_LIST_DIR}/include
)

target_link_libraries(oled_ssd1306 pico_stdlib hardware_i2c)
target_compile_options(oled_ssd1306 PUBLIC
	-Wno-deprecated-declarations
	-Wno-unused-variable
	-Wno-unused-function
	-Wno-unused-parameter
	-Wno-write-strings
	-Wno-narrowing
)