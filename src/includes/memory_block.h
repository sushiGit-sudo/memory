#pragma once

template<typename T>
class MemoryBlock
{
private:
	T* m_Memory;
	unsigned int m_MemorySize;
public:
	MemoryBlock(const char* string);
	MemoryBlock(unsigned int size);
	~MemoryBlock();

	void clear();

	void CopyMemory(T* src, unsigned int size);
	void CopyMemory(MemoryBlock& memory);

	T& GetIndexedMemoryAddress(unsigned int index) const;
	void SetIndexedMemory(T data, unsigned int index);

	T& operator[](unsigned int index) const;
	void operator=(const char* string);

private:
	unsigned int countCharPtr(const char* string);
};

template<typename T>
inline MemoryBlock<T>::MemoryBlock(const char* string)
	: m_Memory(nullptr), m_MemorySize(countCharPtr(string))
{
	m_Memory = new T[m_MemorySize];
	CopyMemory((char*)string, m_MemorySize);
}

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
inline void MemoryBlock<T>::CopyMemory(T* src, unsigned int size)
{
	for (unsigned int i = 0; i < size; i++)
	{
		m_Memory[i] = src[i];
	}
}

template<typename T>
inline void MemoryBlock<T>::CopyMemory(MemoryBlock& memory)
{
	CopyMemory(memory.m_Memory, memory.m_MemorySize);
}

template<typename T>
inline T& MemoryBlock<T>::GetIndexedMemoryAddress(unsigned int index) const
{
	return m_Memory[index];
}

template<typename T>
inline void MemoryBlock<T>::SetIndexedMemory(T data, unsigned int index)
{
	m_Memory[index] = data;
}

template<typename T>
inline T& MemoryBlock<T>::operator[](unsigned int index) const
{
	return m_Memory[index];
}

template<typename T>
inline void MemoryBlock<T>::operator=(const char* string)
{
	if (m_Memory)
		delete[] m_Memory;

	m_MemorySize = countCharPtr(string);
	m_Memory = new T[m_MemorySize];

	CopyMemory((char*)string, m_MemorySize);
}

template<typename T>
inline unsigned int MemoryBlock<T>::countCharPtr(const char* string)
{
	unsigned int count = 0;
	for (unsigned int i = 0; string[i]; i++)
		count++;

	return count;
}
