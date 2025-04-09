#pragma once

template<typename T>
class MemoryBlock
{
private:
	T* m_Memory;
	unsigned int m_MemorySize;
public:
	MemoryBlock(unsigned int size);
	~MemoryBlock();

	void clear();

	T& operator[](unsigned int index) const;
};

template<typename T>
inline MemoryBlock<T>::MemoryBlock(unsigned int size)
	: m_Memory(nullptr), m_MemorySize(size)
{
	m_Memory = new T[m_MemorySize];
}

template<typename T>
inline MemoryBlock<T>::~MemoryBlock()
{
	if (m_Memory)
		delete[] m_Memory;
}

template<typename T>
inline void MemoryBlock<T>::clear()
{
	for (unsigned int i = 0; i < m_MemorySize; i++)
	{
		m_Memory[i] = NULL;
	}
}

template<typename T>
inline T& MemoryBlock<T>::operator[](unsigned int index) const
{
	return m_Memory[index];
}
