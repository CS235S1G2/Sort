###############################################################
# Program:
#     Week 11, Sorts
#     Brother XXXXX, CS265
# Author:
#     <your name here>
# Summary:
#     <put a description here>
# Time:
#     <how long did it take to complete this program>?
###############################################################

##############################################################
# The main rule
##############################################################
a.out: week11.o
	g++ -o a.out week11.o -g
	tar -cf week11.tar *.h *.cpp makefile

##############################################################
# The individual components
#      week11.o     : the driver program
##############################################################
week11.o: bnode.h bst.h stack.h week11.cpp sortValue.h \
		sortBinary.h sortInsertion.h sortHeap.h sortBubble.h \
		sortSelection.h sortMerge.h sortQuick.h
	g++ -c week11.cpp -g

