#include "pch.h"
#include "BookSku.h"
#include "BookSku.g.cpp"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
//static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::Bookstore3::implementation
{
	BookSku::BookSku(winrt::hstring const& title) : m_title{ title }
	{
	}

	winrt::hstring BookSku::Title()
	{
		return m_title;
	}

	void BookSku::Title(winrt::hstring const& value)
	{
		if (m_title != value)
		{
			m_title = value;
			m_propertyChanged(*this, Windows::UI::Xaml::Data::PropertyChangedEventArgs{ L"Title" });
		}
	}

	winrt::event_token BookSku::PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
	{
		return m_propertyChanged.add(handler);
	}

	void BookSku::PropertyChanged(winrt::event_token const& token)
	{
		m_propertyChanged.remove(token);
	}
}
