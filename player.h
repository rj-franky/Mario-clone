#ifndef PLAYER_H
#define PLAYER_H

struct Player{
		Vector2 size = {75, 125};
		Vector2 position = {0, 165};
		float speed = 5;
		Texture2D mario_texture = LoadTexture("texture/m.png");
	
		void update_mario(){
			//DrawRectangleV(position, size, BLUE);
			DrawTextureEx(mario_texture, position, 0, 0.25, WHITE);
		}
};

void Player_Movement(Player *mario){

	if (IsKeyDown(KEY_A))mario->position.x -= mario->speed;
	if (IsKeyDown(KEY_D))mario->position.x += mario->speed;
}

#endif
