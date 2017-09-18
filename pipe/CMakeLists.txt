# Suricata source code under GUN version 2 license.
# Copyright 2017, TraceThreat System.
#

#  Titles			             Authors                            Date
#  -                                       
# 

#Pipe library ports code to C++


INCLUDE_DIRECTORIES( ../
	             ../src/
		     /usr/include/
	             /usr/local/include/)

MESSAGE( STATUS "PROJECT_SOURCE_DIR : " ${PROJECT_SOURCE_DIR} )


SET(PIPE_SRC 
        Base.h	
	ComponentBase.hpp
	ComponentBase.cpp
   )

ADD_LIBRARY(pipecomponent SHARED ${PIPE_SRC})
LINK_DIRECTORIES(/usr/lib/)

TARGET_LINK_LIBRARIES(pipecomponent PRIVATE htp)

