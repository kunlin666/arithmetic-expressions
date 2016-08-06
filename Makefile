CXX = g++-5
CXXFLAGS = -Wall -MMD -std=c++14 
EXEC = a3q3
OBJECTS = main.o intSet.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}

