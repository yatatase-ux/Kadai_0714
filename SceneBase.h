#pragma once
#include <iostream>
#include <conio.h>


enum class Scene
{
    None,
    OP,
    Play,
    End
};

class SceneBase
{
protected:

public:
	virtual ~SceneBase() {};

    virtual Scene Input() = 0;
	virtual Scene Update() = 0;
	virtual void Draw() = 0;
    virtual void Reset() = 0;
};


// マクロ定義-------------------------------------

// コピー禁止クラス
#define NONCPY(className) \
public:\
    className(const className&) = delete;\
    className& operator=(const className&) = delete;

// シングルトンクラス
#define SINGLETON(className)\
private:\
    className();\
public:\
    static className& Instance()\
    {\
        static className instance;\
        return instance;\
    }\

// シーンクラス定義
#define SCENECLASS(className)\
    NONCPY(className);\
    SINGLETON(className);\
public:\
    Scene Input() override;\
    Scene Update() override;\
    void Draw() override;\
    void Reset(); override;
// シーンクラス定義
#define SCENECLASS(className)\
    NONCPY(className)\
    SINGLETON(className)\
public:\
    Scene Input() override;\
    Scene Update() override;\
    void Draw() override;\
    void Reset() override;


#define CONSTRUCTOR(className)\
className::className()

#define INPUT(className)\
Scene className::Input()

#define UPDATE(className)\
Scene className::Update()

#define DRAW(className)\
void className::Draw()

#define RESET(className)\
void className::Reset(){};