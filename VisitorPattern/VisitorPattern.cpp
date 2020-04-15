// VisitorPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Visitor.h"
#include "Entity.h"

int main()
{
	/* �������ڴ�������Դ _object*/
	Object _object(3);
	/*���ڷ���Object�ķ�����*/
	Visitor *_visitor = new Visitor();
	/*A_Entity �Ƕ�Ӧ��Object����Ķ�������*/
	A_Entity _parentEntity(&_object);

	_parentEntity.accept(_visitor);

	/*������ɣ�ɾ������*/
	delete _visitor;
	_visitor = nullptr;

	system("pause");
    return 0;
}

