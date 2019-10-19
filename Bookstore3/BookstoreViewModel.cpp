#include "pch.h"
#include "BookstoreViewModel.h"
#include "BookstoreViewModel.g.cpp"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
//static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::Bookstore3::implementation
{
	BookstoreViewModel::BookstoreViewModel()
	{
		m_bookSku = winrt::make<Bookstore3::implementation::BookSku>(L"Atticus");
	}

	Bookstore3::BookSku BookstoreViewModel::BookSku()
	{
		return m_bookSku;
	}
}
