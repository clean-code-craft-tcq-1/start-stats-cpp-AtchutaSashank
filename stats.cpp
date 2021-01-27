#include "stats.h"

std::vector<float> Statistics::ComputeStatistics(const std::vector<float>& stats) {
    std::vector<float> computedStats;
	if(stats.size() > 0)
	{
		float min = *std::min_element(stats.begin(), stats.end());
		float max = *std::max_element(stats.begin(), stats.end());
		float sum = 0.0f;
		for(int i =0; i < stats.size(); i++)
		{
			 sum += stats[i];
		}
		float average = sum / stats.size();
		computedStats.push_back(average);
		computedStats.push_back(max);
		computedStats.push_back(min);
	}
	return computedStats;
}
