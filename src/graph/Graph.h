/*                                                                                                                                                                                                                
 * GraphReader.h                                                                                                                                                                                                  
 * Created By Md Maruf Hossain                                                                                                                                                                                    
 * Student at UNC Charlotte (06-25-2019)                                                                                                                                                                          
 */

#include "../Utilities.h"

class Graph {
 private:
  std::string name;
  count n;
  count m;
  count id;
  bool weighted;
  bool directed;
  std::vector<bool> exists;
  std::vector<count> inDeg;
  std::vector<count> outDeg;
  std::vector< std::vector<node> > inEdges;
  std::vector< std::vector<node> > outEdges;
  std::vector< std::vector<edgeweight> > inEdgeWeights;
  std::vector< std::vector<edgeweight> > outEdgeWeights;

 public:
  std::string getName(){
    return name;
  }

}

