#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

//the link of car's GPS
class gps_node{
  private:
    unsigned int ID;
    double time;
    double lat;
  public:
    gps_node(unsigned int a, double b, double c){
      ID = a;
      time = b;
      lat = c;
    }
    unsigned int get_ID(){
      return ID;
    }
    double get_time(){
      return time;
    }
    double get_lat(){
      return lat;
    }
};

//the link of car's information
class info_node{
  private:
    unsigned int ID;
    double car;
  public:
    info_node(unsigned int a, double b):ID(a), car(b){}
    unsigned int get_ID(){
      return ID;
    }
    double get_car(){
      return car;
    }
};

//the integrated link
class node{
  private:
    unsigned int ID;
    double time;
    double lat;
    double car;
  public:
    node(unsigned int a, double b, double c, double d):ID(a), time(b), lat(c), car(d){}
    unsigned int get_ID(){
      return ID;
    }
    double get_time(){
      return time;
    }
    double get_lat(){
      return lat;
    }
    double get_car(){
      return car;
    }
};
