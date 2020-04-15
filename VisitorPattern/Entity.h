#pragma once

#include "Visitor.h"

/*加入程序中存在一个基础数据类型 Object*/
class Object
{
public:
	Object(size_t cout) {
		m_count = cout;
	};
	~Object() {};
	size_t getCount()const { return m_count; }
private:
	size_t m_count;
};

class Visitor;
class Entity
{
public:
	Entity(const Object* object)
	{
		m_object = object;
		m_ChildCount = object->getCount();
	};
	virtual ~Entity() {};
	size_t getEntityChild()const
	{
		return m_ChildCount;
	}
	const Object*getChild(size_t index) { return m_object; }
	// 定义对象的操作接口
	virtual void accept(Visitor* visitor) = 0;
private:

	const Object* m_object;
	size_t m_ChildCount;
};

class A_Entity : public Entity
{
public:
	/*可以在具体类的构造函数实现一些操作，例如对Object的进行读取、获得状态等等*/
	A_Entity(const Object* object) :
		Entity(object)
	{
	}
	~A_Entity() {}

	virtual void accept(Visitor* visitor)
	{
		visitor->visitEntity(this);
	}
private:
};

class B_Entity : public Entity
{
public:
	/*可以在具体类的构造函数实现一些操作*/
	B_Entity(const Object* object) :
		Entity(object)
	{

	}
	~B_Entity() {}

	virtual void accept(Visitor* visitor)
	{
		visitor->visitEntity(this);
	}
private:

};

class C_Entity : public Entity
{
public:
	/*可以在具体类的构造函数实现一些操作*/
	C_Entity(const Object* object) :
		Entity(object)
	{

	}
	~C_Entity() {}

	virtual void accept(Visitor* visitor)
	{
		visitor->visitEntity(this);
	}
private:

};