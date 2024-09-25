#include <sketch.h>

void candleu(float x, float y, float r){
	draw_circle(x, y, r);
	draw_circle(x, y-(r/3), 2*r/3);
	draw_circle(x, y-(2*r/3), r/3);
}

void candled(float x, float y, float r){
	draw_circle(x, y, r);
	draw_circle(x, y+(r/3), 2*r/3);
	draw_circle(x, y+(2*r/3), r/3);
}

int main(){
	candleu(100,100,100);
	candleu(-100,100,100);
	candled(100,-100,100);
	candled(-100, -100,100);
	save_sketch("out.svg");
}

