#pragma once
class Player
{
private:
	int posX_;
	int posY_;
	int speedX_;
	int radius_;
	int gra_;
	int graflag_;
	int gracool_;
public:
	void Initialize();
	void Update(char* keys, char* preKeys);
	void Draw();
};

