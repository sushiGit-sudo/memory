
# **MEMORY**
### 'memory.h' is a Header File you can include in your `C/C++` projects to help manipulate memory. This module works in a fast and efficient way.
---
## `Class -> MemoryBlock`
#### The class `MemoryBlock` is a template class that allows you to store any type of data with any size; this is mainly used for storing large groups of data.
##### `T* m_Memory;`: Used to store the data in the block.
##### `unsigned int m_MemorySize;`: Used to specify how much data
##### `void clear();`: Used to set the entire **MemoryBlock** to NULL; it does not call `delete[] m_Block;`
##### `void CopyMemory(T* src, unsigned int size);`: Used to copy the src to the memory block.
##### `void CopyMemory(MemoryBlock& memory);`: Used to copy another memory block to this memory block.
##### `T& GetIndexedMemoryAddress(unsigned int index) const;`: Used to get the memory address of specific index in the memory block.
##### `void SetIndexedMemory(T data, unsigned int index);`: Used to set an individual index on the memory block.
##### `T& operator[](unsigned int index) const;`: Used to access the data using `memory[0]`.
##### `void operator=(const char* string);`: Used to 
---
> Us here at (c)Bitwise Studio are working to make this a better module.
---
> [Github](https://github.com/sushiGit-sudo)
>> Copyright (c) 2025 'Bitwise Studio'
 Licensed under the Apache 2.0 License. See LICENSE file in the project root for full license information.
