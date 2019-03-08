#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginMyRobot : public WorldPlugin
  {
    public: WorldPluginMyRobot() : WorldPlugin()
            {
              printf("Welcome to Justin's World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
                printf("Loading physics\n");
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}

