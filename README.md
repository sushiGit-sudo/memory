
# **MEMORY**
#### 'memory.h' is a Header File you can include in your `C/C++` projects to help manipulate memory. This module works in a fast and efficient way.
---
## `Class -> MemoryBlock`
#### `MemoryBlock` is a template class that allows you to store any type of data with any size; this is mainly used for storing large groups of data.
##### `T* m_Memory;` used to store the data in the memory block.
##### `unsigned int m_MemorySize;` used to specify how much data is in the memory block.
##### `void clear();` is used to set the entire memory block to NULL; it does not call `delete[] m_Block;`
##### `T& operator[](unsigned int index) const;` Allows you to access the data using `memory[0]`.
---
> Here at (c)Bitwise Studio, we are working to make this a better module.
---
> [Github](https://github.com/sushiGit-sudo)
>> Copyright (c) 2025 'Bitwise Studio'
 Licensed under the Apache 2.0 License. See LICENSE file in the project root for full license information.
