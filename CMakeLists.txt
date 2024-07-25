cmake_minimum_required(VERSION 3.22.0)
project (CMake_Zadacha10_2)
set(SOURCES_file
6zadacha3.cpp Figura.cpp Treug.cpp Treug_pryamoyg.cpp Treug_ravnobed.cpp Treug_ravnostor.cpp Cheterexyg.cpp 
Pryamoyg.cpp Kvadrat.cpp Parallelog.cpp Romb.cpp)
set(HEADERS 
Figura.h Treug.h Treug_pryamoyg.h Treug_ravnobed.h Treug_ravnostor.h Cheterexyg.h Pryamoyg.h 
Kvadrat.h Parallelog.h Romb.h)
add_executable(CMake_Zadacha10_2 ${SOURCES_file} ${HEADERS})