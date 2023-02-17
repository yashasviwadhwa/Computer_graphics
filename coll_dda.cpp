#include<conio.h>
#include<graphics.h>
#include<math.h>
void ddaline(int x1, int y1, int x2, int y2) {
	int s, m, dx, dy;
	float xi, yi, x, y;
	dx = x2 - x1;
	dy = y2 - y1;
	if (abs(dx) > abs(dy))
		s = abs(dx); else
		s = abs(dy);
	xi = dx / (float) s;
	yi = dy / (float) s;
	x = x1;
	y = y1;
	putpixel(x1 + 0.5, y1 + 0.5, 15);
	for (m = 0; m < s; m++) {
		x += xi;
		y += yi;
		putpixel(x + 0.5, y + 0.5, 15);
	}
}