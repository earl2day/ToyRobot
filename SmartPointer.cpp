#include "SmartPointer.h"

template<typename T> SmartPointer<T>::SmartPointer(T* ptr)
{
	m_ptr = ptr;
}

template<typename T> SmartPointer<T>::~SmartPointer()
{
	delete (T*)m_ptr;
}

template<typename T> T& SmartPointer<T>::operator*()
{
	return *((T*)m_ptr);
}