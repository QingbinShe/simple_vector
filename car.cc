#include "car.h"

int main()
{
  //create two vector, each one include 12 element, to simulate
  vector<gps_node> gps_vector;
  vector<info_node> info_vector;
  for (int i = 0; i < 12; i++) {
    gps_node gps_tmp_node(i, i+100, i+200);
    info_node info_tmp_node(i, i+300);
    gps_vector.push_back(gps_tmp_node);
    info_vector.push_back(info_tmp_node);
  }
  //test
  //cout << gps_vector[1].getID();
  //cout << info_vector[2].getID();

  //create two vector<gps_node>
  vector<gps_node> gps_vector_a;
  vector<gps_node> gps_vector_b;
  for (vector<gps_node>::size_type i = 0; i < gps_vector.size(); i++) {
    if (gps_vector[i].get_ID() % 2 == 0) {
      gps_vector_a.push_back(gps_vector[i]);
    }
    else if (gps_vector[i].get_ID() % 2 == 1) {
      gps_vector_b.push_back(gps_vector[i]);
    }
  }
  //test
/*  for (int i = 0; i < gps_vector_a.size(); i++) {
    cout << gps_vector_a[i].get_lat();
  }
  cout << endl;
  for (int i = 0; i < gps_vector_b.size(); i++) {
    cout << gps_vector_b[i].get_lat();
  }
*/

  //create two vector<info_node>
  vector<info_node> info_vector_a;
  vector<info_node> info_vector_b;
  for (vector<info_node>::size_type i = 0; i < info_vector.size(); i++) {
    if (info_vector[i].get_ID() % 2 == 0) {
      info_vector_a.push_back(info_vector[i]);
    }
    else if (info_vector[i].get_ID() % 2 == 1) {
      info_vector_b.push_back(info_vector[i]);
    }
  } 
  //test
/*  for (int i = 0; i < info_vector_a.size(); i++) {
    cout << info_vector_a[i].get_car();
  }
  cout << endl;
  for (int i = 0; i < info_vector_b.size(); i++) {
    cout << info_vector_b[i].get_car();
  }
*/

  //create the whole table
  vector<node> node_vector;
  for (vector<info_node>::size_type i = 0; i < info_vector_a.size(); i++) {
    for (vector<gps_node>::size_type j = 0; j < gps_vector_a.size(); j++) {
      if (info_vector_a[i].get_ID() == gps_vector_a[j].get_ID()) {
        node temp_node(gps_vector_a[j].get_ID(), gps_vector_a[j].get_time(),gps_vector_a[j].get_lat(),\
                       info_vector_a[i].get_car());
        node_vector.push_back(temp_node);
      }
    }
  }
  for (vector<info_node>::size_type i = 0; i < info_vector_b.size(); i++) {
    for (vector<gps_node>::size_type j = 0; j < gps_vector_b.size(); j++) {
      if (info_vector_b[i].get_ID() == gps_vector_b[j].get_ID()) {
        node temp_node(gps_vector_b[j].get_ID(), gps_vector_b[j].get_time(),gps_vector_b[j].get_lat(),\
                       info_vector_b[i].get_car());
        node_vector.push_back(temp_node);
      }
    }
  }

  //test
  for (vector<node>::size_type i = 0; i < node_vector.size(); i++) {
    cout << node_vector[i].get_ID() << '\t' << node_vector[i].get_time() << '\t' \
         << node_vector[i].get_lat() << '\t' << node_vector[i].get_car() << endl;
    //cout << node_vector[i].get_car();
  }

  return 0;
}
