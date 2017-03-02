#include "DynArray.h"



DynArray::DynArray(void)
{
	m_capacity = DYN_ARRAY_DEFAULT_SIZE;
	m_size = 0;
	//m_data = new int[];

}

DynArray::DynArray(int *arr, size_t size)
{
	m_data = new int[*arr];
	m_size = size;
}


DynArray::~DynArray(void)
{
	delete[] m_data;
}
/*
DynArray& DynArray::operator=(const DynArray &x) 
{
	this->m_capacity = x.m_capacity;
	this->m_size = x.m_size;
	delete[] m_data;
	m_data = x.m_data;
	
}*/
/*
int& DynArray::operator[](size_t n) const
{
	return ;

}*/