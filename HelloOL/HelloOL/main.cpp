#include <GL\glew.h>


#include "display.h"


int main(int argc, char** argv)
{
	Display display(400, 300, "hello world!");

	while (!display.IsClosed())
	{
		display.Clear(0.0f, 1.0f, 0.0f, 1.0f);

		display.Update();// Ë¢ÐÂ
	}

	return 0;
}