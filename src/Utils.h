#ifndef EXAMSCHEDULER_UTILS_H
#define EXAMSCHEDULER_UTILS_H

#define HOURS_PER_DAY 10;
#define REPETITIONS 40;
#define NUM_ELITISTS 3;
#define CROSSING_PROB 90;
#define MUTATION_PROB 5;

enum GeneticStages{
    POPULATE, SELECTION, CROSSOVER, MUTATION
};

enum AlgorithmType{
    SIMULATED_ANNEALING, GENETIC
};

#endif //EXAMSCHEDULER_UTILS_H
