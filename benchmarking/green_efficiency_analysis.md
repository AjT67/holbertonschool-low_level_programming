Green Efficiency Analysis by Aj Taylor


Measurement Methodology
Timing was done with clock() from <time.h>, reporting CPU time confusmed by the process which is then converted to CLOCKS_PER_SEC

Four intervals were measured: TOTAL and the other three phases BUILD_DATA, PROCESS, REDUCE each bounded by a clock() call before and after the function call.


Observed Performance Differences
Run 1: Total 0.002885, BUILD_DATA 0.002431, PROCESS 0.000290, REDUCE 0.000151
Run 2: Total 0.001579, BUILD_DATA 0.001088, PROCESS 0.000333, REDUCE 0.000143
Run 3: Total 0.000798, BUILD_DATA 0.000365, PROCESS 0.000300, REDUCE 0.000122
Run 4: Total 0.001029, BUILD_DATA 0.000545, PROCESS 0.000292, REDUCE 0.000152
Run 5: Total 0.000830, BUILD_DATA 0.000407, PROCESS 0.000285, REDUCE 0.000127

BUILD_DATA has the largest and more variable phase while PROCESS and REDUCE are small and stable.

Relation Between Runtime and Energy Consumption
The two processes of Runtime and Energy consumption that the longer something runs the more power it will consume is plausible but not nessecarily correct. As there could more power consumed during a short duration and intense power consumption phase during PROCESS compared to the long duration but less power intensive usage of BUILD_DATA.


Limitations of the Experiment
Lack of information on actual power consumption.
Timer resolution with clock() having coarse granularity of ~1ms.
Single run/machine bias.

Practical Engineering Takeaway
This kind of phase level instrumentation is useful for identifying where to focus optimisation efforts for power sensitive code. 
