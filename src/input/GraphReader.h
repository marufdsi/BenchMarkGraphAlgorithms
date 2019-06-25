/*
 * GraphReader.h
 * Created By Md Maruf Hossain
 * Student at UNC Charlotte (06-25-2019)
*/

#include "../graph/Graph.h"

class GraphReader {

 public:

  virtual ~GraphReader() = default;
  \*
  * @param[in] input file path of the graph
  */
  virtual Graph read(const std::string& path) = 0;
}
