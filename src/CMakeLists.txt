include_directories(${CMAKE_CURRENT_SOURCE_DIR})

AUX_SOURCE_DIRECTORY(${CMAKE_CURRENT_SOURCE_DIR} source)

# Use libexample for avoiding conflicts with add_executable(example).
# And rename liblibexample.a to libexample.a
add_library(libsuricata_port ${source})
set_target_properties(libsuricata_port PROPERTIES OUTPUT_NAME "suricata_port")

target_include_directories(libsuricata_port PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
