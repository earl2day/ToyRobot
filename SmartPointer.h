#ifndef _SMART_POINTER_
#define _SMART_POINTER_

template<typename T> class SmartPointer
{
public:
	SmartPointer(T* ptr = NULL);
	~SmartPointer();
	T& operator*();
private:
	T* m_ptr;
};
#endif
