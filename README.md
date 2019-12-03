# C++ Winrt ProgressRing During long operation

Simple C++ winrt example project made to explain problem of returning async operation to update a collection
and updating loading icon


## Expected Behavior
  When button is pressed, the ProgressRing is activated (Starts spinning), the computation to find primes is done,
  and a book is added to the collection. then the ProgressRing is set to IsActive="False" and stops spinning.

## Actual Behavior
  Button is pressed, UI Freezes and the ProgressRing is never shown.

## Getting Started

Compile the project and click the button. The first 110,000 prime numbers will be calculated. Takes about 5 seconds
on my Intel I7-3770K. You can lower or raise that number if it takes to long



