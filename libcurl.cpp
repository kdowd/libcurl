#include <iostream>
#include <string>
#include "curl/curl.h"

int main()
{
	CURL* curl{};
	CURLcode res;

	std::string url = "https://example.com/foo.asp?name=dddd";
	//curl_easy_setopt(curl, CURLOPT_URL, "https://example.com/file.txt");

}
