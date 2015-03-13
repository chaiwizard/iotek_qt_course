#include "data.h"

#include "slot.h"

int main()
{
	
	Data a(1);
	SlotExample b(10);

	QObject::connect(&a,SIGNAL(valueChanged(int)),&b,SLOT(doSomething(int)));

	a.setVal(2);

	return 0;
}
