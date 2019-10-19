#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::Bookstore3::implementation
{
	MainPage::MainPage()
	{
		m_mainViewModel = winrt::make<Bookstore3::implementation::BookstoreViewModel>();
		InitializeComponent();
	}

	void MainPage::ClickHandler(Windows::Foundation::IInspectable const& /* sender */, Windows::UI::Xaml::RoutedEventArgs const& /* args */)
	{
		MainViewModel().BookSku().Title(L"To Kill a Mockingbird");
	}

	Bookstore3::BookstoreViewModel MainPage::MainViewModel()
	{
		return m_mainViewModel;
	}
}
