#pragma once
#include <iostream>
#include <conio.h>

#define NONCPY(className) \
public:\
    className(const className&) = delete;\
    className& operator=(const className&) = delete;

#define SINGLETON(className)\
private:\
    className();\
public:\
    static className& Instance()\
    {\
        static className instance;\
        return instance;\
    }\

#define SCENECLASS(className)\
    NONCPY(className);\
    SINGLETON(className);\
public:\
    Scene Input() override;\
    Scene Update() override;\
    void Draw() override;\


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
};