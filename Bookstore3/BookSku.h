#pragma once
#include "BookSku.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
//static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::Bookstore3::implementation
{
	struct BookSku : BookSkuT<BookSku>
	{
		BookSku() = delete;
		BookSku(winrt::hstring const& title);

		winrt::hstring Title();
		void Title(winrt::hstring const& value);
		winrt::event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value);
		void PropertyChanged(winrt::event_token const& token);

	private:
		winrt::hstring m_title;
		winrt::event<Windows::UI::Xaml::Data::PropertyChangedEventHandler> m_propertyChanged;
	};
}
