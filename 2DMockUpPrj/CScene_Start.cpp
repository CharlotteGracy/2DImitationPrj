#include "framework.h"
#include "CScene_Start.h"
#include "CGameObject.h"
#include "CPlayer.h"

CScene_Start::CScene_Start() {

}
CScene_Start::~CScene_Start() {

}

void CScene_Start::Enter() {
	
	

	CGameObject* pPlayer = new CPlayer;

	pPlayer->SetPos(fPoint(200, 200));
	pPlayer->SetScale(fPoint(100, 100));
	AddObject(pPlayer, GROUP_GAMEOBJ::PLAYER);


}

void CScene_Start::Exit() {

}