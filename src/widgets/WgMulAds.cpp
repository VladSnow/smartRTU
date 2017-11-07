#include "WgMulAds.h"

WgMulAds::WgMulAds(int Ax, int Ay, wgMode Amode):	WgBackground(Ax, Ay, Amode) 
{
}

WgMulAds::~WgMulAds()
{
}

void WgMulAds::render()
{
	//~~~ render background

	WgBackground::render();
	
	//~~~ render header

	renderHeader( "Par mums" );
}

bool WgMulAds::update()
{
	return true;
}

