import sys

def n():
	return 10

def t():
	return 9

def F(a):
	sys.stdout = open('Grace_kid.py', 'w')
	print a % (n(), n(), n(), t(), n(), n(), n(), t(), n(), n(), n(), t(), n(), t(), n(), n(), n(), t(), n(), n(), n(), 34, a, 34)

'''
	Comment
'''

F("import sys%c%cdef n():%c%creturn 10%c%cdef t():%c%creturn 9%c%cdef F(a):%c%csys.stdout = open('Grace_kid.py', 'w')%c%cprint a %% (n(), n(), n(), t(), n(), n(), n(), t(), n(), n(), n(), t(), n(), t(), n(), n(), n(), t(), n(), n(), n(), 34, a, 34)%c%c'''%c%cComment%c'''%c%cF(%c%s%c)")
