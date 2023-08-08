#include "StackBase.h"

namespace LDS
{
	template<class DataType>
	Stack<DataType>::Stack() : m_top(-1)
	{
		
	}
	
	template<class DataType>
	bool Stack<DataType>::empty()
	{
		return m_top == -1;
	}
	
	template<class DataType>
	bool Stack<DataType>::push(const DataType& data)
	{
		if (m_top == MAXSIZE) return false;
		m_data[++m_top] = data;
		return true;
	}
	
	template<class DataType>
	bool Stack<DataType>::pop(DataType& topdata)
	{
		if (empty()) return false;
		topdata = m_data[m_top--];
		return true;
	}
}