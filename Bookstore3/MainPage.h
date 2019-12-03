#pragma once

#include "MainPage.g.h"
#include "BookstoreViewModel.h"
#include "winrt/Windows.UI.Core.h"
#include <ppltasks.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Web.Syndication.h>
namespace winrt::Bookstore3::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();
		Bookstore3::BookstoreViewModel MainViewModel();
       
        
		concurrency::task <std::wstring> RetrieveSearchResults();
		void ClickHandler(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::RoutedEventArgs const&);
		private:
			Bookstore3::BookstoreViewModel m_mainViewModel{ nullptr };
	};
}

namespace winrt::Bookstore3::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
