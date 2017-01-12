/*
 * Facetracker
 * @authors : Hamza & Godeleine & Quentin
 *
*/
#ifndef HFT_PERSON
#define HFT_PERSON
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/contrib/contrib.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <stdio.h>
#include <string>
#include "ft_draw.h"
#include "ft_recognise.h"

/* struct for a person */

class Person{
  public:
    Person();
    ~Person();
    void setRect(CvRect * p_r);
    void setName(string p_name);
    void setId(int p_id);
    CvRect * getRect();
    string getName();
    int getId();
  protected:
    string m_name;
    CvRect * m_r;
    int m_id;

};

#endif
