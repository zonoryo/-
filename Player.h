#pragma once
class Player
{
private:
	int posX_;
	int posY_;
	int speedX_;
	int radius_;
public:
	void Initialize();
	void Update();
	void Draw();
};

