#pragma once

#include "Visitor.h"

/*��������д���һ�������������� Object*/
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
	// �������Ĳ����ӿ�
	virtual void accept(Visitor* visitor) = 0;
private:

	const Object* m_object;
	size_t m_ChildCount;
};

class A_Entity : public Entity
{
public:
	/*�����ھ�����Ĺ��캯��ʵ��һЩ�����������Object�Ľ��ж�ȡ�����״̬�ȵ�*/
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
	/*�����ھ�����Ĺ��캯��ʵ��һЩ����*/
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
	/*�����ھ�����Ĺ��캯��ʵ��һЩ����*/
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