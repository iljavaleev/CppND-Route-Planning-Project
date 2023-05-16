#ifndef ROUTE_MODEL_H
#define ROUTE_MODEL_H

#include <limits>
#include <cmath>
#include <unordered_map>
#include "model.h"
#include <iostream>

class RouteModel : public Model {

  public:
    class Node : public Model::Node {
      public:
        // Add public Node variables and methods

        Node(){}
        Node(int idx, RouteModel * search_model, Model::Node node) : Model::Node(node), parent_model(search_model), index(idx) {}

      private:
        //add private
        int index;
        RouteModel * parent_model = nullptr;
    };
    // add public
    RouteModel(const std::vector<std::byte> &xml);
    std::vector<Node> path;
    
  private:
    // add private

};

#endif
