// VisitorPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Visitor.h"
#include "Entity.h"

int main()
{
	/* 假设现在存在数据源 _object*/
	Object _object(3);
	/*用于访问Object的访问者*/
	Visitor *_visitor = new Visitor();
	/*A_Entity 是对应于Object级别的对象类型*/
	A_Entity _parentEntity(&_object);

	_parentEntity.accept(_visitor);

	/*访问完成，删除对象*/
	delete _visitor;
	_visitor = nullptr;

	system("pause");
    return 0;
}

