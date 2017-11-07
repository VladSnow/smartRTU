#pragma once

class Ads {
protected:
    virtual bool Load(const char * jsonFile);
public:
    Ads();
    ~Ads();
    virtual bool update();
    virtual void render();
};