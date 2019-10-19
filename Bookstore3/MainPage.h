#pragma once

#include "MainPage.g.h"
#include "BookstoreViewModel.h"
namespace winrt::Bookstore3::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();
		Bookstore3::BookstoreViewModel MainViewModel();
       
        

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
