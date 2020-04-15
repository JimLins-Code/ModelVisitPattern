#pragma once
#include <iostream>

/*具体的访问者操作类，定义对所有Entity类型的操作函数 visitEntity */

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
