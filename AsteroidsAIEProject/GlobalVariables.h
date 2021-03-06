#ifndef GLOBAL_VARIABLES
#define GLOBAL_VARIABLES

#define HEIGHT 17
#define WIDTH 17

#define MAX_SHOTS 4
#define MAX_SHOT_Health 55
#define PI 3.1415926
#define PI_OVER_TWO 1.5707963f
#define CIRCLE 360.0f
#define HALF_CIRCLE 180.0f
#define ASTEROID_VELOCITY_RANGE 0.10f
#define ASTEROID_MIN_VEL 0.03f
#define ASTEROID_SPLIT_VEL 0.06f

#define DECEL_FACTOR 0.0009f
#define DECEL_MIN 0.002f
#define MIN_RADIUS .6f

#define MAX_NEW_ASTEROIDS 3
#define MAX_SPAWN_ASTEROIDS 2
#define MAX_ASTEROIDS 6

#define FRAMES_ON_DEATH 50

#define SHIP_FRONT 1.0f
#define SHIP_SIDE .4f
#define SHIP_BACK .5f

#define Health_FRONT .5f
#define Health_SIDE .2f
#define Health_BACK .25f

#define COLLISION_RADIUS 2

#define PARTICLE_COUNT 100
#define MAX_Explode_Health 80
#define PARTICLE_VELOCITY_RANGE 0.1f

#define SHOT_RADIUS 0.1f

#define LARGE_ASTEROID_POINTS 20
#define MEDIUM_ASTEROID_POINTS 50
#define SMALL_ASTEROID_POINTS 100
#define LARGE_ALIEN_POINTS 200
#define SMALL_ALIEN_POINTS 1000

#define ALIEN_VELOCITY 0.06f
#define SMALL_ALIEN_VELOCITY 0.04f

#define SAFE_ZONE 3

#define BONUS 2000
#define SHOT_PARTICLE_COUNT 200
#define MAX_SHOT_Explode_Health 70
#define OUTER_MIN_PARTICLE_VELOCITY 0.11f
#define INNER_MIN_PARTICLE_VELOCITY 0.11f
#define OUTER_MAX_PARTICLE_VELOCITY 0.15f
#define INNER_MAX_PARTICLE_VELOCITY 0.12f

#define NUMBER_STARS 100
#define STAR_MIN_Z 5.5f
#define STAR_MAX_Z 6.5f
#define STAR_WIDTH 25.0f
#define STAR_HEIGHT 25.0f

#define fRand(fMin, fMax) (fMin + ((float)rand() / RAND_MAX) * (fMax - fMin))

#endif