#include "easing.hpp"

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;
using namespace easing;

template <typename Fn>
void asciiplot(const char* name, Fn fn, int w, int h) {
	vector<float> values;
	float step_x = 1.f / (float) w;
	float step_y = 1.f / (float) h;

	{
		for (int i = 0; i < w; ++i)
			values.push_back(fn((float)i * step_x));
	}

	vector<char> line;
	cout << endl;
	for (int y = h; y >= 0; --y) {
		line.clear();
		line.push_back('|');
		float fy = (float) y / (float) h;
		for (int x = 0; x < w; ++x)
			line.push_back((fabs(values[x] - fy) < step_x) ? 'x' : ' ');
		line.push_back('\0');
		cout << line.data() << endl;
	}
	{
		size_t nlen = strlen(name);
		line.clear();
		line.push_back('+');
		for (int x = 0; x < w - nlen - 1; ++x)
			line.push_back('-');
		line.push_back(' ');
		line.insert(line.end(), name, name + nlen);
		line.push_back('\0');
		cout << line.data() << endl;
	}
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
}
