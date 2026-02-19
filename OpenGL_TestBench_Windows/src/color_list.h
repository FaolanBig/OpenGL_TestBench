#pragma once
#include <cstdint>

// website for colors: https://surferhelp.goldensoftware.com/topics/colors.htm
// neovim macros
// :s/=/\r/e k:s/ /_/ge j:s/ /,/g 0@cjdd

// -------- USAGE --------
// COLOR_APPLY(COLOR(RED))

struct Color
{
	float r;
	float g;
	float b;
	float a;
};

constexpr Color colorFromRGBA(uint8_t r, uint8_t g, uint8_t b, uint8_t a = 255)
{
	return Color{ r / 255.0f, g / 255.0f, b / 255.0f, a / 255.0f };
}

//#define COLOR(c) colorFromRGBA(c)
//#define COLOR_APPLY (c) glClearColor(COLOR(c).r, COLOR(c).g, COLOR(c).b, COLOR(c).a)
//#define COLOR_APPLY(c) (c).r, (c).g, (c).b, (c).a
#define COLOR(c) colorFromRGBA(c).r, colorFromRGBA(c).g, colorFromRGBA(c).b, colorFromRGBA(c).a

#define BLACK 0, 0, 0, 255
#define WHITE 255, 255, 255, 255
#define BLUE 0, 0, 255, 255
#define CYAN 0, 255, 255, 255
#define GREEN 0, 255, 0, 255
#define YELLOW 255, 255, 0, 255
#define RED 255, 0, 0, 255
#define MAGENTA 255, 0, 255, 255
#define PURPLE 153, 0, 204, 255
#define ORANGE 255, 102, 0, 255
#define PINK 255, 153, 204, 255
#define DARK_BROWN 102, 51, 51, 255
#define POWDER_BLUE 204, 204, 255, 255
#define PASTEL_BLUE 153, 153, 255, 255
#define BABY_BLUE 102, 153, 255, 255
#define ELECTRIC_BLUE 102, 102, 255, 255
#define TWILIGHT_BLUE 102, 102, 204, 255
#define NAVY_BLUE 0, 51, 153, 255
#define DEEP_NAVY_BLUE 0, 0, 102, 255
#define DESERT_BLUE 51, 102, 153, 255
#define DODGER_BLUE 19, 137, 255, 255
#define SKY_BLUE 0, 204, 255, 255
#define ICE_BLUE 153, 255, 255, 255
#define SMALT_BLUE 0, 104, 208, 255
#define LIGHT_BLUEGREEN 153, 204, 204, 255
#define OCEAN_GREEN 102, 153, 153, 255
#define MOSS_GREEN 51, 102, 102, 255
#define DARK_GREEN 0, 51, 51, 255
#define FOREST_GREEN 0, 102, 51, 255
#define GRASS_GREEN 0, 153, 51, 255
#define WILD_WILLOW 181, 204, 97, 255
#define KENTUCKY_GREEN 51, 153, 102, 255
#define LIGHT_GREEN 51, 204, 102, 255
#define SPRING_GREEN 51, 204, 51, 255
#define TURQUOISE 102, 255, 204, 255
#define SEA_GREEN 51, 204, 153, 255
#define FADED_GREEN 153, 204, 153, 255
#define GHOST_GREEN 204, 255, 204, 255
#define MINT_GREEN 153, 255, 153, 255
#define ARMY_GREEN 102, 153, 102, 255
#define AVOCADO_GREEN 102, 153, 51, 255
#define MARTIAN_GREEN 153, 204, 51, 255
#define DULL_GREEN 153, 204, 102, 255
#define CHARTREUSE 153, 255, 0, 255
#define MOON_GREEN 204, 255, 102, 255
#define MURKY_GREEN 51, 51, 0, 255
#define OLIVE_DRAB 102, 102, 51, 255
#define KHAKI 153, 153, 102, 255
#define OLIVE 153, 153, 51, 255
#define BANANA_YELLOW 204, 204, 51, 255
#define LIGHT_YELLOW 255, 255, 102, 255
#define CHALK 255, 255, 153, 255
#define PALE_YELLOW 255, 255, 204, 255
#define BROWN 153, 102, 51, 255
#define RED_BROWN 204, 102, 51, 255
#define GOLD 204, 153, 51, 255
#define AUTUMN_ORANGE 255, 102, 51, 255
#define LIGHT_ORANGE 255, 153, 51, 255
#define PEACH 255, 153, 102, 255
#define DEEP_YELLOW 255, 204, 0, 255
#define SAND 255, 204, 153, 255
#define WALNUT 102, 51, 0, 255
#define RUBY_RED 153, 0, 0, 255
#define BRICK_RED 204, 51, 0, 255
#define TROPICAL_PINK 255, 102, 102, 255
#define SOFT_PINK 255, 153, 153, 255
#define FADED_PINK 255, 204, 204, 255
#define DARK_RED 128, 0, 0, 255
#define CRIMSON 153, 51, 102, 255
#define REGAL_RED 204, 51, 102, 255
#define DEEP_ROSE 204, 51, 153, 255
#define NEON_RED 255, 0, 102, 255
#define DEEP_PINK 255, 102, 153, 255
#define HOT_PINK 255, 51, 153, 255
#define DUSTY_ROSE 204, 102, 153, 255
#define PLUM 102, 0, 102, 255
#define DEEP_VIOLET 153, 0, 153, 255
#define LIGHT_VIOLET 255, 153, 255, 255
#define VIOLET 204, 102, 204, 255
#define DUSTY_PLUM 153, 102, 153, 255
#define PALE_PURPLE 204, 153, 204, 255
#define MAJESTIC_PURPLE 153, 51, 204, 255
#define NEON_PURPLE 204, 51, 255, 255
#define LIGHT_PURPLE 204, 102, 255, 255
#define TWILIGHT_VIOLET 153, 102, 204, 255
#define EASTER_PURPLE 204, 153, 255, 255
#define DEEP_PURPLE 51, 0, 102, 255
#define GRAPE 102, 51, 153, 255
#define BLUE_VIOLET 153, 102, 255, 255
#define BLUE_PURPLE 153, 0, 255, 255
#define DEEP_RIVER 102, 0, 204, 255
#define DEEP_AZURE 102, 51, 255, 255
#define STORM_BLUE 51, 0, 153, 255
#define DEEP_BLUE 51, 0, 204, 255
#define DARK_BLUE 0, 0, 128, 255