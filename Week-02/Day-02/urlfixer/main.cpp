#include <iostream>

#include <string>



int main(int argc, char* args[])

{

    std::string url("https//www.reddit.com/r/nevertellmethebots");
    std::string url2("https://www.reddit.com/r/nevertellmetheodds");



    int start_pos = url.find(url2);
    if(start_pos == std::string::npos)
        std::cout << "" << std::endl; //
    else
        url.replace(start_pos, url2.length(), "https://www.reddit.com/r/nevertellmetheodds");



    // Accidentally I got the wrong URL for a funny subreddit. It's probably "odds" and not "bots"

    // Also, the URL is missing a crucial component, find out what it is and insert it too!



    std::cout << url << std::endl;



    return 0;

}