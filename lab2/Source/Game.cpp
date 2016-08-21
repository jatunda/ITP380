#include "Game.h"
#include <SDL/SDL.h>
#include "Texture.h"
#include "Random.h"

Game::Game()
	:mRenderer(*this)
	,mAssetCache(*this, "Assets/")
	,mShouldQuit(false)
{

}

Game::~Game()
{
	mAssetCache.Clear();
	mWorld.RemoveAllActors();
	SDL_Quit();
}

bool Game::Init()
{
	// Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) != 0)
	{
		SDL_Log("Failed to initialize SDL.");
		return false;
	}

	// Initialize Renderer
	if (!mRenderer.Init(1024, 768))
	{
		SDL_Log("Failed to initialize renderer.");
		return false;
	}

	// Initialize RNG
	Random::Init();

	// Start frame timer
	mTimer.Start();

	// Run any code at game start
	StartGame();

	return true;
}

void Game::RunLoop()
{
	// TODO
}

void Game::Quit()
{
	// TODO
}

void Game::StartGame()
{
	// TODO
}

void Game::ProcessInput()
{
	// TODO
}

void Game::HandleKeyPressed(int key)
{
	// TODO
}

void Game::HandleKeyReleased(int key)
{
	// TODO
}

void Game::Tick()
{
	// TODO
}

void Game::GenerateOutput()
{
	// TODO
}
