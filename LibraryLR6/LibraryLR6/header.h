// header.h: включаемый файл для стандартных системных включаемых файлов,
// или конкретных включаемых файлов проектов
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Исключите редко используемые компоненты из заголовков Windows
// Файлы заголовков Windows:
#include <windows.h>

#ifdef MATHFUNCS_EXPORTS
#define MATHFUNCS_API __declspec(dllexport) 
#else
#define MATHFUNCS_API __declspec(dllimport) 
#endif

namespace MathOperation
{
	class MyOperations
	{
	public:
		static MATHFUNCS_API double Plus(double a, double b);
		static MATHFUNCS_API double Razn(double a, double b);
	};

	class LR6
	{
	public:
		static MATHFUNCS_API void fact(double &x, double &b, double &a, int &n);
	};
}


// TODO: Установите здесь ссылки на дополнительные заголовки, требующиеся для программы
