#include "Player.h"
#include "Novice.h"
void Player::Initialize() {
	posX_ = 300;
	posY_ = 300;
	radius_ = 50;
	speedX_ = 5;
	//重力
	gra_ = 0;
	//重力フラグ
	graflag_= 0;
}
void Player::Update(char* keys, char* preKeys) {
	//重力フラグ切り替え
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0) {
		gra_ = 0;
		graflag_ += 1;
	}
	if (graflag_ == 2) {
		graflag_ = 0;
	}
	//重力フラグが1の時上に落ちる
	if (graflag_ == 1) {
		posY_ -= gra_;
		gra_ += 1;
	}
	//重力フラグが0の時下に落ちる
	if (graflag_ == 0) {
		posY_ += gra_;
		gra_ += 1;
	}
	if (keys[DIK_D]) {
		posX_ += speedX_;
	}
	if (keys[DIK_A]) {
		posX_ -= speedX_;
	}
	//仮の床・天井
	if (posY_>720){
		posY_ = 720;
	}
	if (posY_ <0) {
		posY_ = 0;
	}

}
void Player::Draw() {
	Novice::DrawEllipse(posX_, posY_, radius_, radius_, 0.0f, WHITE, kFillModeSolid);
	Novice::ScreenPrintf(20, 20, "%d", graflag_);
	Novice::ScreenPrintf(40, 20, "%d", gra_);
}