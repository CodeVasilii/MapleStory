#include "PlayerEditorScene.h"
#include "LayerPlayerEditor.h"

Scene* PlayerEditorScene::create()
{
	auto scene = Scene::create();

	auto layer = LayerPlayerEditor::create();

	scene->addChild(layer);

	return scene;
}