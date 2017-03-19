#include "MicroBit.h"

MicroBitDisplay display;

int main() {
	display.scroll(":-)");
	
	release_fiber();
}