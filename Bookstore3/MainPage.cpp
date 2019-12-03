#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
#include "winrt/Windows.UI.Core.h"
#include <ppltasks.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Web.Syndication.h>
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
		//pring().IsActive(true);// Set loading to true
		//pring().UpdateLayout();
		
		auto bookname{ RetrieveSearchResults() };
		pring().IsActive(true);// Set loading to true
		pring().UpdateLayout();
		
		//MainViewModel().BookSku().Title(L"To Kill a Mockingbird");
		if (MainViewModel().BookSkus().Size() > 5) {
			MainViewModel().BookSkus().Clear();
		}
		else {
			auto stuff{ RetrieveSearchResults() };
			auto value = stuff.get();
			MainViewModel().BookSkus().Append(winrt::make<Bookstore3::implementation::BookSku>(value + winrt::to_hstring(MainViewModel().BookSkus().Size())));
			
		}
		pring().IsActive(false);// Set loading to true
		pring().UpdateLayout();
		
		//pring().IsActive(false);// Set to false when done
	}
	bool isPrime(int n)
	{
		// Corner case 
		if (n <= 1)
			return false;

		// Check from 2 to n-1 
		for (int i = 2; i < n; i++)
			if (n % i == 0)
				return false;

		return true;
	};
	// Function to iterate through primes
	void loopPrime(int n)
	{
		for (int i = 2; i <= n; i++) {
			isPrime(i);
		}
	};
	concurrency::task <std::wstring> MainPage::RetrieveSearchResults() {
		pring().IsActive(true);// Set loading to true
		pring().UpdateLayout();
		return concurrency::create_task([]
			{
				
				loopPrime(200000);
				return std::wstring{ L"newbook" };
			});

	}

	Bookstore3::BookstoreViewModel MainPage::MainViewModel()
	{
		return m_mainViewModel;
	}
}
