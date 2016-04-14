import sys
import os

i = 5
i = i - 1 if (sys.argv[0] != 'Sully.py') else i
cmd = 'Sully_' + str(i) + '.py'
sys.stdout = open(cmd, 'w')
a = "import sys%cimport os%c%ci = %d%ci = i - 1 if (sys.argv[0] != 'Sully.py') else i%ccmd = 'Sully_' + str(i) + '.py'%csys.stdout = open(cmd, 'w')%ca = %c%s%c%cprint a %% (10, 10, 10, i, 10, 10, 10, 10, 34, a, 34, 10, 10, 10, 10, 9)%csys.stdout = sys.__stdout__%cif i > 0:%c%cos.system('python ' + cmd)"
print a % (10, 10, 10, i, 10, 10, 10, 10, 34, a, 34, 10, 10, 10, 10, 9)
sys.stdout = sys.__stdout__
if i > 0:
	os.system('python ' + cmd)
