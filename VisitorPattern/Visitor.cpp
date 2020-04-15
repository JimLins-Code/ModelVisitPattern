#include "Visitor.h"
#include "Entity.h"

void Visitor::visitEntity(A_Entity * entity)
{
	/*访问者的意义在此：对于真正的操作在这里实现*/
	for (size_t i = 0; i < entity->getEntityChild(); i++)
	{
		B_Entity _entity(entity->getChild(i));
		_entity.accept(this);
	}
}

void Visitor::visitEntity(B_Entity * entity)
{
	for (size_t i = 0; i < entity->getEntityChild(); i++)
	{
		C_Entity _entity(entity->getChild(i));
		_entity.accept(this);
	}
}

void Visitor::visitEntity(C_Entity * entity)
{
	std::cout << "get a C_Entity" << std::endl;
}
