#pragma once

class Settings
{
	//scans location, cardsize, windowsize, etc.
public:
	int GetWidth()
	{
		return windowwidth;
	}
	int GetHeight()
	{
		return windowheight;
	}




private:
	const int windowwidth = 1200;
	const int windowheight = 600;

};
