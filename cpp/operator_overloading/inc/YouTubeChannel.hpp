#ifndef YOUTUBECHANNEL_HPP
#define YOUTUBECHANNEL_HPP

#include <iostream>

class YouTubeChannel
{
	public:
		YouTubeChannel();
		YouTubeChannel(std::string channelName, int subscribers);
		YouTubeChannel(YouTubeChannel& other);
		~YouTubeChannel();
		YouTubeChannel& operator=(YouTubeChannel& channel);

		std::string 		name;
		int					numOfSubs;
		
		std::string 		getName();
		void				setName(std::string newName);

		int					getNumOfSubs();
		void				setNumOfSubs(int newNumOfSubs);

	private:
	
};


std::ostream& operator<<(std::ostream& os, YouTubeChannel& channel);

YouTubeChannel::YouTubeChannel(){};

YouTubeChannel::YouTubeChannel(std::string channelName, int subscribers) : name(channelName), numOfSubs(subscribers){};

YouTubeChannel::YouTubeChannel(YouTubeChannel& other){
	*this = other;
};

YouTubeChannel& YouTubeChannel::operator=(YouTubeChannel& channel){
	if (this != &channel){
		this->name = channel.getName();
		this->numOfSubs = channel.getNumOfSubs();
	}
	return *this;
};

YouTubeChannel::~YouTubeChannel(){}

std::string YouTubeChannel::getName(){
	return this->name;
};

void		YouTubeChannel::setName(std::string newName){
	this->name = newName;
};

int			YouTubeChannel::getNumOfSubs(){
	return this->numOfSubs;
};

void		YouTubeChannel::setNumOfSubs(int newNumOfSubs){
	this->numOfSubs = newNumOfSubs;
};


std::ostream& operator<<(std::ostream& os, YouTubeChannel& channel){
	os << "Name: " << channel.getName() << std::endl;
	os << "Subscribers: " << channel.getNumOfSubs() << std::endl;
	return os;
};

#endif