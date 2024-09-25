#include <sketch.h>

int main(){
	float i;
	for (i = -200; i<= 200; i += 100){
		draw_circle(i, 0, 50);
	}
	save_sketch("out.svg");
	return 0;
}

