

#include "Class.h"
#include "Field.h"
#include "Method.h"
#include "Namespace.h"


#include <string.h>

using namespace std;



Class::Class() {
	_name = nullptr;
	_namespace = nullptr;
	_parantsCount = 0;
	_methodsCount = 0;
	_fieldsCount = 0;
	_fields = new Field * [10];
	_methods = new Method * [10];
	_parents = new Class * [10];
	
}

void Class::SetName(char* n) {
	if (_name)
		delete[] _name;
	int nn = strlen(n);
	_name = new char[nn + 1];
	strncpy(_name, n, nn);
}

char* Class::GetName() {
	return _name;
}

void Class::SetNamespace(Namespace* n) {
	if (_namespace) {
		delete _namespace;
	}
	_namespace = new Namespace;
	_namespace = n;
}

Namespace* Class::GetNamespace() {
	return _namespace;
}

void Class::SetParent(Class* c) {
	if (_parantsCount > 9) {
		throw "нет места для еще одного родителя";
	}
	_parents[_parantsCount++] = c;
}

Class** Class::GetParents() {
	return _parents;
}

void Class::SetField(Field* f) {
	if (_fieldsCount> 9) {
		throw "нет места для еще одного свойства";
	}
	_fields[_fieldsCount++] = f;
}

Field** Class::GetFields() {
	return _fields;
}

void Class::SetMethod(Method* m) {
	if (_methodsCount > 9) {
		throw "нет места для еще одного метода";
	}
	_methods[_methodsCount++] = m;
}

Method** Class::GetMethods() {
	return _methods;
}

void Class::SetType(Type type) {
	_classType = type;
}

Class::Type Class ::GetType() {
	return _classType;
}


