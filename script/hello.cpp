#include <gazebo/gazebo.hh> // include basic gazebo function 

namespace gazebo
{
  class WorldPluginMyRobot : public WorldPlugin // creat a new plugin called WorldPluginMyRobot thats inherit from WorldPlugin class
  {
    public: WorldPluginMyRobot() : WorldPlugin() // constructor 
            {
              printf("Welcome to Udacity's World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) // mandatory and always included receives info from world file 
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot) // register plugin with the simulator
}
