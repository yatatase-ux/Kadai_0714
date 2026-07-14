#pragma once
#include <iostream>
#define NONCPY(className)  \
public: \
    className(const className&) = delete; \
    className& operator=(const className&) = delete;

#define SINGLETON(className)\
private:\
    className();\
public:\
    static className& Instance() \
    { \
        static className instance; \
        return instance; \
    }\

#define SCENECLASS(className)\
    NONCPY(className);\
    SINGLETON(className);\
public:\
    void Update() override;\
    void Draw() override;\


class SceneBase
{
protected:

public:
	virtual ~SceneBase() {};

	virtual void Update() = 0;
	virtual void Draw() = 0;
};