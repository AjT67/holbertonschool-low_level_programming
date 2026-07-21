Green Efficiency Analysis by Aj Taylor


Measurement Methodology
Timing was done with clock() from <time.h>, which reports CPU time consumed by the process rather than the wall-clock time, converted to seconds via division by CLOCKS_PER_SEC.

Four intervals were measured: TOTAL and the other three phases BUILD_DATA, PROCESS, REDUCE each bounded by a clock() call immediately before and after the corresponding function call. This approach isolates the CPU cost of each stage independently, allowing the phases to be compared both in absolute terms and as a proportion of total runtime.


Observed Performance Differences
Run 1: Total 0.002885, BUILD_DATA 0.002431, PROCESS 0.000290, REDUCE 0.000151
Run 2: Total 0.001579, BUILD_DATA 0.001088, PROCESS 0.000333, REDUCE 0.000143
Run 3: Total 0.000798, BUILD_DATA 0.000365, PROCESS 0.000300, REDUCE 0.000122
Run 4: Total 0.001029, BUILD_DATA 0.000545, PROCESS 0.000292, REDUCE 0.000152
Run 5: Total 0.000830, BUILD_DATA 0.000407, PROCESS 0.000285, REDUCE 0.000127

Acorss all five runs, BUILD_DATA is consistently the largest and more variable phase ranging from roughly 0.0004s to 0.0024s, almost a 6 times difference. This variability is likely attributable to memory allocaiton overhead, cache effects or OS-level scheduling noise on first access to data structures. By constract PROCESS and REDUCE remain small and remarkably stable across runs, suggesting these phases are largely CPU bound with predictable, low variance execution paths and minimal dependency on external system state.

Relation Between Runtime and Energy Consumption
While it it is tempting to assume that longer runtime directly implies higher energy consumption, but this relationship is not necessarily linear or even monotonic. Energy consumption depends on both duration and instantaneous power draw. A short but computationally intense phase such as PROCESS, which may exercise the ALU or cache heavily could plausibily consume more energy per unuit time than a longer but comparativiely idle phase like BUILD_DATA, which may spend more of its time waiting on memory rather than actively computing. Without direct power measurement, runtime alone is an unreliable proxy for energy cost.

Limitations of the Experiment
No direct power measurement instrumentation was used, so energy claims are speculative.
Lack of information on actual power consumption.
Timer resolution with clock() having coarse granularity of ~1ms.
Results reflect a single run/machine bias, so they may not generalise across hardware or load conditions.

Practical Engineering Takeaway
This kind of phase level instrumentation is useful for identifying where to focus optimisation efforts for power sensitive code. 
