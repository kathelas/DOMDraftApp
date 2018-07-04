#pragma once

class Settings
{
	//scans location, cardsize, windowsize, etc.
public:
	int GetWidth() const
	{
		return windowwidth;
	}
	int GetHeight() const
	{
		return windowheight;
	}




private:
	const int windowwidth = 1400;
	const int windowheight = 900;

};
