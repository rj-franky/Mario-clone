#ifndef env_h
#define env_h

struct environment{
	Vector2 position = {-380, -40};
	Texture2D env_texture = LoadTexture("texture/level.png");
	
	void draw_environment()
	{
		DrawTextureEx(env_texture, position, 0, 1.9, WHITE);
	}
};


#endif
