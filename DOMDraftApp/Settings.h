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
	int windowwidth = 800;
	int windowheight = 600;

};
