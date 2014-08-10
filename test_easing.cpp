#include "easing.hpp"

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;
using namespace easing;

template <typename Fn>
void plotline(Fn fn, char head, char filler, float y, int from, int to, float step,
              vector<float> const& values, vector<char>& line) {
	line.clear();
	line.push_back(head);
	bool hit = false;
	for (int x = from; x < to; ++x) {
		if (fabs(values[x] - y) <= step) {
			hit = true;
			line.push_back('*');
		} else {
			line.push_back(filler);
		}
	}
	if (!hit) {
		int minx = from;
		for (int x = from + 1; x < to; ++x) {
			if (fabs(values[x] - y) < fabs(values[minx] - y))
				minx = x;
		}
		if (fabs(values[minx] - y) < step * 1.25)
			line[minx + 1] = '*';
	}
	line.push_back(0);
	cout << line.data() << endl;
}

template <typename Fn>
void asciiplot(const char* name, Fn fn, int w, int h) {
	vector<char> line;
	vector<float> values;
	float step_x = 1.f / (float) w;
	float step_y = 1.f / (float) h;
	float pre_v = 1.f;
	float post_v = 0.f;

	{
		for (int i = 0; i < w; ++i) {
			values.push_back(fn((float)i * step_x));
			if (values.back() < post_v)
				post_v = values.back();
			if (values.back() > pre_v)
				pre_v = values.back();
		}
	}

	if (pre_v > 1.f) {
		int n = (int)((float)h * (pre_v - 1.f) + 1.f);
		for (int y = 0; y < n; ++y) {
			float fy = 1.f + (float)(n - y) / (float) h;
			plotline(fn, ' ', ' ', fy, 0, w, step_x, values, line);
		}
	}

	for (int y = h; y >= 0; --y) {
		float fy = (float) y / (float) h;
		plotline(fn, '|', ' ', fy, 0, w, step_x, values, line);
	}
	if (post_v < 0.f) {
		int n = (int)((float)h * -post_v + 1.f);
		for (int y = 0; y < n; ++y) {
			float fy = (float)(-1 - y) / (float) h;
			plotline(fn, y == 0 ? '+' : ' ', y == 0 ? '-' : ' ', fy, 0, w, step_x, values, line);
		}
	} else {
		cout << '+';
		for (int i = 0; i < w; ++i)
			cout << '-';
		cout << endl;
	}
	for (int i = 0; i < (w - strlen(name))/2; ++i)
		cout << ' ';
	cout << name << endl << endl;

}

#define TEST(fn) do { asciiplot(#fn, [](float f) { return fn(f); }, 60, 20); } while (0)

int main(int argc, char* argv[]) {
	TEST(linear);
	TEST(quadraticIn);
	TEST(quadraticOut);
	TEST(quadraticInOut);
	TEST(cubicIn);
	TEST(cubicOut);
	TEST(cubicInOut);
	TEST(quarticIn);
	TEST(quarticOut);
	TEST(quinticIn);
	TEST(quinticOut);
	TEST(quinticInOut);
	TEST(sineIn);
	TEST(sineOut);
	TEST(sineInOut);
	TEST(circularIn);
	TEST(circularOut);
	TEST(circularInOut);
	TEST(exponentialIn);
	TEST(exponentialOut);
	TEST(exponentialInOut);
	TEST(elasticIn);
	TEST(elasticOut);
	TEST(elasticInOut);
	TEST(backIn);
	TEST(backOut);
	TEST(backInOut);
	TEST(bounceIn);
	TEST(bounceOut);
	TEST(bounceInOut);
	TEST(perlinInOut);
}
