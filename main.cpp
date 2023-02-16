#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>

using namespace std;


struct atoms{
   public:
      float mass;
      float x_position;
      float y_position;
      char atomstypes;
};
struct bond{
   public:
      int32_t id1;
      int32_t id2;
      char bondtype;
};

struct copolymer{
   public:
      int32_t id;
      vector<atoms> copoatoms;
      vector<bond> copobonds;
};
struct solvent{
  vector<atoms> solventatoms;
};
class box{
   public:
      float box_xlength;
      float box_ylength;
      float box_zlength;
      int num_particles;
      vector<copolymer>  boxcopolymer;
      vector<solvent> boxsolvent;
};

using namespace std;
int main()
{
   ifstream infile;
   infile.open("brush.mst");
   string str;
   int particle_nums;
   box brushbox;
   while(infile >> str){
      string::size_type idx = str.find("num_particles");
      if(idx!=string::npos){
         infile >> particle_nums;
         brushbox.num_particles=particle_nums;
         cout << brushbox.num_particles;
      }
      else if ((str.find("position"))!=string::npos)
      {
         for(int i=0;i<brushbox.num_particles/3;i++){
            brushbox.boxcopolymer.
         }
      }
      
   }


   return 0;
}