/*
The MIT License (MIT)

Copyright (c) 2014 Vadim Androsov

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#define inject_as_singleton(I, T, ...) \
namespace injector##I{ \
	I& getInstance() \
	{ \
		static T instance = T(__VA_ARGS__); \
		return instance; \
	} \
	struct Factory \
	{ \
		I& get() { return getInstance(); } \
	}; \
}

#define inject_as_object(I, T, ...) \
namespace injector##I{ \
struct Factory \
	{ \
	Factory() : object(__VA_ARGS__) {} \
	I& get() { return object; } \
	T object; \
	}; \
}

#define inject_as_share(I, T, ...) \
namespace injector##I{ \
struct Factory \
	{ \
	Factory() { \
		if (refCount == 0) { \
			object = new T(__VA_ARGS__); \
		} \
		++refCount;\
	} \
	~Factory() { \
		--refCount; \
		if (refCount == 0) { \
			delete object; \
		} \
	} \
	I& get() { return *object; } \
	static T* object; \
	static unsigned int refCount; \
}; \
	T* Factory::object = 0; \
	unsigned int Factory::refCount = 0; \
}

#define inject(I, Name) \
	struct I##Proxy \
	{ \
		I* operator->() \
		{ \
			return &factory.get(); \
		} \
		injector##I::Factory factory; \
	}; \
	I##Proxy Name;

