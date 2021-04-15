#pragma once

#include "ofMain.h"

#define AMOUNT 28

class particle {
private:
    ofVec2f vel;
    //    int rad = 10;
    
public:
    particle();
    ofPoint pos;
    bool alive = false;
    void update();
    void draw();
    int getX();
    int getY();
    int getR();
    int lifetime;
    int time;
    
    float getMouseX();
    float getMouseY();
};


class ofApp : public ofBaseApp{
    public:
        void setup();
        void update();
        void draw();
        
        void keyPressed(int key);
        void keyReleased(int key);
        void mouseMoved(int x, int y);
        void mouseDragged(int x, int y, int button);
        void mousePressed(int x, int y, int button);
        void mouseReleased(int x, int y, int button);
        void mouseEntered(int x, int y);
        void mouseExited(int x, int y);
        void windowResized(int w, int h);
        void dragEvent(ofDragInfo dragInfo);
        void gotMessage(ofMessage msg);
    
        ofTrueTypeFont myFont;
        ofTrueTypeFont myFontBig;
        ofTrueTypeFont myFontSmall;
        ofTrueTypeFont myFontXSmall;
    
    ofSoundPlayer bgmloop;
    vector<float> speedx;
    vector<float> speedy;
    ofImage image;
    float rotate;
};
