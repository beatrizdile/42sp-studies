#include "YouTubeChannel.hpp"

int main(void) 
{
    YouTubeChannel myChannel("bilokah", 42);
    std::cout << myChannel.getName() << " | " << myChannel.getNumOfSubs() << std::endl;

    YouTubeChannel mySecondChannel("bibi", 123);
    std::cout << mySecondChannel.getName() << " | " << mySecondChannel.getNumOfSubs() << std::endl;

    YouTubeChannel myThridChannel(myChannel);
    std::cout << myThridChannel.getName() << " | " << myThridChannel.getNumOfSubs() << std::endl;

    std::cout << mySecondChannel;
    
    return 0;
}
