def foo():
	return;

'''
	Comment
'''

def main():
	'''
		This is main function
	'''
	n = 10
	b = 92
	q = 34
	t = 9
	a = "def foo():%c%creturn;%c%c'''%c%cComment%c'''%c%cdef main():%c%c'''%c%c%cThis is main function%c%c'''%c%cn = 10%c%cb = 92%c%cq = 34%c%ct = 9%c%ca = %c%s%c%c%cprint a %% (n, t, n, n, n, t, n, n, n, n, t, n, t, t, n, t, n, t, n, t, n, t, n, t, n, t, q, a, q, n, t, n)%cmain()"
	print a % (n, t, n, n, n, t, n, n, n, n, t, n, t, t, n, t, n, t, n, t, n, t, n, t, n, t, q, a, q, n, t, n)
main()
