aux_source_directory(. SRC_LIST)
aux_source_directory(./Chapter9 SRC_CHAP_LIST)
aux_source_directory(./Chapter10 SRC_CHAP_LIST101)
add_executable(Cpp_CourseUbuntu ${SRC_LIST} Chapter9 ${SRC_CHAP_LIST} ${SRC_CHAP_LIST101})