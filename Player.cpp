#include "Player.h"
#include "Novice.h"
void Player::Initialize() {
	posX_ = 300;
	posY_ = 300;
	radius_ = 50;
	speedX_ = 10;
}
void Player::Update() {
	posX_ += speedX_;
	if (posX_ < 50 || posX_>1230) {
		speedX_ *= -1;
	}

}
void Player::Draw() {
	Novice::DrawEllipse(posX_, posY_, radius_, radius_, 0.0f, WHITE, kFillModeSolid);
}