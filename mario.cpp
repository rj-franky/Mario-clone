/*
	My first programming project over the summer
	Making a working mario clone for the first level :)
	creted by: Raheem Frankson
	Created on: 05/20/2024
	
	
	to do: 	properly align everything
			fix movement
			create specific block types
			create enemies
			create score
			create menu
			
	05/21/2024:	Added camera follows player
			Added background environment to properly visualize camera movement
				
*/
#include"raylib.h"
#include"player.h"
#include"env.h"

// Entry point
int main(){
	
	InitWindow(800, 450, "window");
	SetTargetFPS(60);
	
	environment env;
	Player mario;
	
	//camera setup
	Camera2D camera = { 0 };
    	camera.target = (Vector2){mario.position.x + 20, mario.position.y + 20};
    	camera.offset = (Vector2){GetScreenWidth()/2.0f, GetScreenHeight()/2.0f };
    	camera.rotation = 0.0;
   	 camera.zoom = 1.0;
	
	//Main Loop
	while (!WindowShouldClose())
	{
		BeginDrawing();
		
		BeginMode2D(camera);
		
		env.draw_environment(); //draws background
		ClearBackground(WHITE);
		
		camera.target = (Vector2){mario.position.x + 20, mario.position.y + 20};
		mario.update_mario();
		Player_Movement(&mario);
		
		EndMode2D();
		
		EndDrawing();
	}
	
	CloseWindow();
	return 0;
}
