#include "stats.h"
#include<math.h>

float average(const std::vector<float>&input)
{
    float avg=0.0;
    float sum=0.0;
    for(float value:input)
    {
          sum=sum+value;
    }
    avg=sum/input.size();
    return avg;
}
float minimum(const std::vector<float>&input)
{
    float minimum=input[0];
    for(float value:input)
    {
        if(value<minimum)
          minimum=value;
    }
    return minimum;
}
float maximum(const std::vector<float>&input)
{
    float maximum=input[0];
    for(float value:input)
    {
        if(value>maximum)
          maximum=value;
    }
    return maximum;
}

Stats Statistics::ComputeStatistics(const std::vector<float>&input ) {
    
      Stats stats;
      if(input.empty())
      {   
          stats.average=NAN;
          stats.max=NAN;
          stats.min=NAN;
          return stats;
      }
      else
      {
       stats.average=average(input);
       stats.max=maximum(input);
       stats.min=minimum(input);
      return stats;
     }
}
