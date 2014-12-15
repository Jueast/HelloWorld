# 6.00.2x Problem Set 4

import numpy
import random
import pylab
from ps3b import *

#
# PROBLEM 1
#        
def simulationDelayedTreatment(numTrials):
    """
    Runs simulations and make histograms for problem 1.

    Runs numTrials simulations to show the relationship between delayed
    treatment and patient outcome using a histogram.

    Histograms of final total virus populations are displayed for delays of 300,
    150, 75, 0 timesteps (followed by an additional 150 timesteps of
    simulation).

    numTrials: number of simulation runs to execute (an integer)
    """
    j=1
    k = [300,150,75,0]
    for steps in k:
        list2 = [0]
        pop = list2 * numTrials
        for time in range(numTrials):
            viruses = []
            for i in range(100):
                viruses.append(ResistantVirus(0.1,0.05, {'guttagonol': False}, 0.005))
            patient = TreatedPatient(viruses,1000)
            temp = 0
            for k in range(steps):
                temp = float(patient.update())
            patient.addPrescription('guttagonol')
            for k in range(steps,steps+150):
                temp = float(patient.update())
            pop[time] = temp
        pylab.figure(j)
        pylab.title("fxcking")
        j += 1
        pylab.hist(pop,bins = 10)
    pylab.show()
        






#
# PROBLEM 2
#
def simulationTwoDrugsDelayedTreatment(numTrials):
    """
    Runs simulations and make histograms for problem 2.

    Runs numTrials simulations to show the relationship between administration
    of multiple drugs and patient outcome.

    Histograms of final total virus populations are displayed for lag times of
    300, 150, 75, 0 timesteps between adding drugs (followed by an additional
    150 timesteps of simulation).

    numTrials: number of simulation runs to execute (an integer)
    """
    j=1
    k = [300,150,75,0]
    for steps in k:
        list2 = [0]
        pop = list2 * numTrials
        for time in range(numTrials):
            viruses = []
            for i in range(100):
                viruses.append(ResistantVirus(0.1,0.05, {'guttagonol': False, 'grimpex': False}, 0.005))
            patient = TreatedPatient(viruses,1000)
            temp = 0
            for o in range(150):
                temp = float(patient.update())
            patient.addPrescription('guttagonol')
            for o in range(steps):
                temp = float(patient.update())
            patient.addPrescription('grimpex')
            for o in range (150):
                temp = float(patient.update())
            pop[time] = temp
        pylab.figure(j)
        pylab.title("fxcking")
        j += 1
        pylab.hist(pop,bins = 10)
    pylab.show()
