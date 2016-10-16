# Simple console menu example

The class realize a simple single console menu. IMPORTANT: C++11 SUPPORT! Take care, if your compiler supports c++11.

# How to setup the menu
Menu element is sended to Run-method as a vector of strings but handler functions as a vector of pointers to the functions.

# How to write handler functions
Handler functions must be written outside a class like a single function. They have to return std::string.

# what functions return
Functions return error message if error happend or empty string if all is ok.
Ñlass uses exception-mechanism. Control them using try-catch. If program got an exception, it does abort.

# small example
```C++
string fun1()
{
	// do stuff
}

string fun2()
{
	// do stuff
}

// menu initialize
Menu menu();
menu.run(
	{ "first", "second" }, //vector of names
	{ fun1, fun2 }         //vector of handlers
);
```
