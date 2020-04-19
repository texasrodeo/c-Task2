#pragma once



class Class
{
public:
	enum Type { Usual, Abstract };
private:
	Type _classType;
	char* _name;
	Field** _fields;
	Method** _methods;
	Namespace* _namespace;
	Class** _parents;
	int _parantsCount;
	int _methodsCount;
	int _fieldsCount;
	
public:

		
	char* GetName();
	Type GetType();
	Field** GetFields();
	Method** GetMethods();
	Namespace* GetNamespace();
	Class** GetParents();

	void SetName(char* n);
	void SetType(Type t);
	void SetField(Field* p);
	void SetNamespace(Namespace* n);
	void SetParent(Class* c);
	void SetMethod(Method* m);


	Class();



};
