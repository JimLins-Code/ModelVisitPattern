#pragma once
#include <iostream>

/*����ķ����߲����࣬���������Entity���͵Ĳ������� visitEntity */

class A_Entity;
class B_Entity;
class C_Entity;
class Visitor
{
	public:
		Visitor() {};
		~Visitor() {};
		void visitEntity(A_Entity* entity);
		void visitEntity(B_Entity* entity);
		void visitEntity(C_Entity* entity);
};
