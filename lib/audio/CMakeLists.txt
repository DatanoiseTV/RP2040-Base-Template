
add_library(Audio STATIC
	src/audio_i2s.c
	src/audio_subsystem.cpp
)

target_include_directories(Audio PUBLIC
	${CMAKE_CURRENT_LIST_DIR}/include
)

target_sources(Audio INTERFACE
            ${CMAKE_CURRENT_LIST_DIR}/src/audio.cpp
            $<$<NOT:$<BOOL:${PICO_NO_HARDWARE}>>:${CMAKE_CURRENT_LIST_DIR}/audio_utils.S>
    )

pico_generate_pio_header(Audio ${CMAKE_CURRENT_LIST_DIR}/piosrc/audio_i2s.pio)

target_link_libraries(Audio pico_stdlib pico_sync pico_util_buffer pico_multicore hardware_pio hardware_dma)
