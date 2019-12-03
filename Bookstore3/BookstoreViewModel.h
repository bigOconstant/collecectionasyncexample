#pragma once
#include "BookstoreViewModel.g.h"
#include "BookSku.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
//static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::Bookstore3::implementation
{
	struct BookstoreViewModel : BookstoreViewModelT<BookstoreViewModel>
	{
		BookstoreViewModel();

		Bookstore3::BookSku BookSku();
		Windows::Foundation::Collections::IObservableVector<Bookstore3::BookSku> BookSkus();

	private:
		Bookstore3::BookSku m_bookSku{ nullptr };
		Windows::Foundation::Collections::IObservableVector<Bookstore3::BookSku> m_bookSkus;
	};
}
