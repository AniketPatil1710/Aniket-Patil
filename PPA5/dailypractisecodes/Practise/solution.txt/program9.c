Que1)
this code produce an compile time error because for case label it requires a constant value that can be integer r character
and here we are passing a variable as label which is not accepteble because value of variable  can be changed in program 

case 1:
	printf("PPA");
	value 1 is fixed through out the program  we can not change that so it is accepted
	so it is giving an compile time error

Que2)


Scope of both variable are differwnt
const int a=1 is a glaobal variable and int a=2 is local variable, when we compile the program compiler binds of
switch(a) with local a if it is not a local variable then compiler binds that a with global a

here a=2

so switch(a)=>switch(2) so case 2 got executed

hence java get printed

Que3)

macro identefiers are allowed as case label
here Core2web(a) is macro we have defined which will have a value of a
at the time preprocessing value of macros get repaced by the actual value
after compilation of code
#define Core2web(a) a=> core@web(1)1

hence whenever in the program Core2web(1) is there it will be replaced by the value 1
and case 1 gets executed
so ans is PPA

Que4)
at preprocessing value of macri Core2web get repllaced by the value 1
 so case Core2Web => case 1

 hence ans is PPA



Que5)

for switch statement it requires a constant value here printf is written inside switch because return type of printf is integer it returns 
count of characters wrtten in printf()

so first core2web will get printed the printf will return the value 8 because core2web is a string of 8 characters

then compilerwilll look for case 8 but it is not given in the code so default will get executed 

hence ans is Python

Que6)

syntax of switch case is

switch(condition){
	
	case 1:
		break;

	case 2:
	break;
	}

	in above code{} are missing so it is a compile time error	

Que7)

here for switch a is given which have if a value 2 so case 2 will get executed

 so ans is Java

Que8)
we can not use variables as case label as it requires constant values

Que9)
here we are passing 0 to switch but there is no case given for 0 so default will get executed

so ans is Core2web

Que10)
here switch(a,a+1):
acts as operator nd after and after computation of a+1 final value is 2

switch(a,a+1) => switch(1,1+1) => switch(2)

hence compile will look for case 2 ans within that case will gate executed

so ans is java
