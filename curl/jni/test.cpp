
/*int main(int argc, char *argv[])
{
  return 0;
}*/

// LibCurl.cpp : Defines the entry point for the console application.
//

//#include <stdafx.h>
#include <stdio.h>
#include <../include/curl/curl.h>
#include <../include/curl/easy.h>

int main(void)
{
  CURL *curl;
  CURLcode res;

  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, "http://google.com");
    res = curl_easy_perform(curl);

    /* always cleanup */
    curl_easy_cleanup(curl);
  }
  return 0;
}
